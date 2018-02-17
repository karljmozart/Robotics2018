/*this will be where we log changes so we know whats different
 * since we cant be in here together because of schedules
 *
 *added TV value in limelight table struct as targetID
 *included limelight.h here
 *added a big function here, take a look at the notes there
 *added a turn light off function to the limelight struct
 *	side note: the tx values in that function are totally arbitrary,
 *	i have absolutely no idea if > 0 means left or vice versa
 *
 *added the color detection function (scroll down)
 *
 *i think it's done, we just need to troubleshoot it where it inevitably goes wrong
 *
 *this was done with the assistance of 150+ mg of caffeine (:
 */



#include "AutoCommand.h"
#include "limelight.h"
#include "AutoBlue.h"
#include "AutoColor.h"
#include "AutoRed.h"
#include "WPILib.h"
#include "TimedDrive.h"
#include "DropTheFuckingBlock.h"
#include "TimedRotate.h"
#include <SmartDashboard/SmartDashboard.h>


AutoCommand::AutoCommand() {
	//movement
	AddSequential(new TimedRotate(1));
	AddSequential(new TimedDrive(0.2, forward));
	AddSequential(new TimedDrive(3, stop));
	AddSequential(new TimedDrive(0.5, turnLeft));

	std::shared_ptr <NetworkTable> limelighttable;
	limelighttable = NetworkTable::GetTable("limelight");
	// \/ THIS IS THE DETECT STRIPS AND ORIENT AND TURN LIGHT OFF FUNCTION IN ONE: \/
	int tv = 0;
	int tx = 0; //Lights are on by default so we're good on lights
	int mode;
	bool buttonRed = SmartDashboard::GetBoolean("DB/Button 1", false);
	bool buttonBlue = SmartDashboard::GetBoolean("DB/Button 2", false);
	limelightData* LLD = new limelightData();
for(int i = 0; i < 10000; i++){
		LLD->table_update();
		tv = LLD->targetID; //get the two important values
		tx = LLD->targetOffsetAngle_Horizontal;
		if(tv == 1 && tx < -10 && tx > -15){ //Limelight will be on right side of bot, so we need to allocate for that in fine tuning
			LLD->lightOff(); //turn off the lights
			break;//exit the loop, because we're facing the right way.
		}
		else if(tv == 1 && tx < -15){//otherwise, if the target is too far right, go right
			AddSequential(new TimedDrive(0.3, turnRight));
		}
		else if(tv == 1 && tx > -10){//if the target is too far left, go left
			AddSequential(new TimedDrive(0.3, turnLeft));
		}
		else if(tv != 1){//if we're not even seeing the target...
			AddSequential(new TimedDrive(.1, turnRight));
				//turn slightly right, then the function repeats
				//until we've turned enough to actually see the target
		}
}

	if(buttonRed == true && buttonBlue == false){
		mode = 2;
	} else if(buttonRed == false && buttonBlue == true){
		mode = 1;
	}
	//AT THIS POINT, WE SHOULD BE FACING THE STRIPS, THIS IS WHERE THE ROBOT
	//NEEDS TO FIND OUT WHERE THE FUCK TO GO, WHICH IS DONE BELOW.

	limelightData* LLD_color = new limelightData(); //make new instance of table
	LLD_color->set_color_mode(mode); //set that tables pipeline to our team colors
	if(LLD_color->targetID == 1){ //if our team color is present
			AddSequential(new TimedDrive(0.5, forward)); //go straight
			AddSequential(new DropTheFuckingBlock(0.5));
	}
	else{//if our team color isn't present
		AddSequential(new TimedDrive(1, turnRight)); //turn towards other platform
		AddSequential(new TimedDrive(3, forward));//go towards it
		AddSequential(new DropTheFuckingBlock(0.5));
	}

	//THAT SHOULD BE IT.




	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.

	// To run multiple commands at the same time,
	// use AddParallel()
	// e.g. AddParallel(new Command1());
	//      AddSequential(new Command2());
	// Command1 and Command2 will run in parallel.

	// A command group will require all of the subsystems that each member
	// would require.
	// e.g. if Command1 requires chassis, and Command2 requires arm,
	// a CommandGroup containing them would require both the chassis and the
	// arm.
}
