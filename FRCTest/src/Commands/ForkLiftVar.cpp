#include "ForkLiftVar.h"

ForkLiftVar::ForkLiftVar() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(ClimbSys);
	thumbstick = oi->GetXbox();
}

// Called just before this Command runs the first time
void ForkLiftVar::Initialize() {
	ClimbSys->Stop();
}

// Called repeatedly when this Command is scheduled to run
void ForkLiftVar::Execute() {
	double val = thumbstick->GetY();
	ClimbSys->liftValue(val);
}

// Make this return true when this Command no longer needs to run execute()
bool ForkLiftVar::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ForkLiftVar::End() {
	ClimbSys->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ForkLiftVar::Interrupted() {
	End();
}
