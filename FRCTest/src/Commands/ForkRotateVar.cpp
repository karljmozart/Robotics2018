#include "ForkRotateVar.h"

ForkRotateVar::ForkRotateVar() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Rotation);
	thumbstick = oi->GetXbox();

}

// Called just before this Command runs the first time
void ForkRotateVar::Initialize() {
	Rotation->Stop();
}

// Called repeatedly when this Command is scheduled to run
void ForkRotateVar::Execute() {
	double val = thumbstick->GetX();
	Rotation->rotateValue(val);
}

// Make this return true when this Command no longer needs to run execute()
bool ForkRotateVar::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ForkRotateVar::End() {
	Rotation->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ForkRotateVar::Interrupted() {
	End();
}
