#include "AutoBlue.h"
limeBlue::limeBlue(){
	limelighttable = NetworkTable::GetTable("limelight");
}

void limeBlue::ledOff(){
	limelighttable->PutNumber("pipeline", 1);
}
AutoBlue::AutoBlue() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	blue1 = new limeBlue();
}

// Called just before this Command runs the first time
void AutoBlue::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void AutoBlue::Execute() {
	limeBlue* newInstance = new limeBlue();
	newInstance->ledOff();
	delete newInstance;
}

// Make this return true when this Command no longer needs to run execute()
bool AutoBlue::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void AutoBlue::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoBlue::Interrupted() {

}
