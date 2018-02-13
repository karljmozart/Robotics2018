#include "PushCrateOut.h"

PushCrateOut::PushCrateOut() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Grabber);
}

// Called just before this Command runs the first time
void PushCrateOut::Initialize() {
	Grabber->Stop();
}

// Called repeatedly when this Command is scheduled to run
void PushCrateOut::Execute() {
	Grabber->PushOut();
}

// Make this return true when this Command no longer needs to run execute()
bool PushCrateOut::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void PushCrateOut::End() {
	Grabber->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PushCrateOut::Interrupted() {
	End();
}
