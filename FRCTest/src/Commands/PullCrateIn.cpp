#include "PullCrateIn.h"

PullCrateIn::PullCrateIn() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Grabber);
}

// Called just before this Command runs the first time
void PullCrateIn::Initialize() {
	Grabber->Stop();
}

// Called repeatedly when this Command is scheduled to run
void PullCrateIn::Execute() {
	Grabber->PullIn();
}

// Make this return true when this Command no longer needs to run execute()
bool PullCrateIn::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void PullCrateIn::End() {
	Grabber->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PullCrateIn::Interrupted() {
	End();
}
