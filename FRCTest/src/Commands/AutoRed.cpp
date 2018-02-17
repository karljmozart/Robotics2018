#include "AutoRed.h"
#include "WPILib.h"

limeRed::limeRed(){
	limelighttable = NetworkTable::GetTable("limelight");
}

//void limeRed::ledOn(){
//	limelighttable->PutNumber("pipeline", 0);
//}

AutoRed::AutoRed() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	red1 = new limeRed();
}

// Called just before this Command runs the first time
void AutoRed::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void AutoRed::Execute() {
	limeRed* newInstance = new limeRed();
	//newInstance->ledOn();
	delete newInstance;

}

// Make this return true when this Command no longer needs to run execute()
bool AutoRed::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void AutoRed::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoRed::Interrupted() {

}
