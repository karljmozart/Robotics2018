#include "ForkRotateRight.h"

ForkRotateRight::ForkRotateRight() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Rotation);

}

// Called just before this Command runs the first time
void ForkRotateRight::Initialize() {
	Rotation->Stop();
}

// Called repeatedly when this Command is scheduled to run
void ForkRotateRight::Execute() {
	Rotation->RotateRight();
}

// Make this return true when this Command no longer needs to run execute()
bool ForkRotateRight::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ForkRotateRight::End() {
	Rotation->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ForkRotateRight::Interrupted() {
	End();
}
