#include "Forward.h"

Forward::Forward() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(DriveTrain);
}

// Called just before this Command runs the first time
void Forward::Initialize() {
	DriveTrain->Stop();
}

// Called repeatedly when this Command is scheduled to run
void Forward::Execute() {
	DriveTrain->DriveForward();
}

// Make this return true when this Command no longer needs to run execute()
bool Forward::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void Forward::End() {
	DriveTrain->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Forward::Interrupted() {
	End();
}
