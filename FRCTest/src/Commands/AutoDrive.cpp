#include "AutoDrive.h"
#include "limelight.h"

AutoDrive::AutoDrive() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void AutoDrive::Initialize() {
	limelighttable->PutNumber("ledMode", 0);
}

// Called repeatedly when this Command is scheduled to run
void AutoDrive::Execute() {
	limelighttable->PutNumber("ledMode", 1);
}

// Make this return true when this Command no longer needs to run execute()
bool AutoDrive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void AutoDrive::End() {
	limelighttable->PutNumber("ledMode", 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoDrive::Interrupted() {

}
