#include "TimedRotate.h"

TimedRotate::TimedRotate(double timeout) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Rotation);
	SetTimeout(timeout);
}

// Called just before this Command runs the first time
void TimedRotate::Initialize() {
	Rotation->Stop();
}

// Called repeatedly when this Command is scheduled to run
void TimedRotate::Execute() {
	while(IsTimedOut() == false){
		Rotation->RotateLeft();
	}
}

// Make this return true when this Command no longer needs to run execute()
bool TimedRotate::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void TimedRotate::End() {
	Rotation->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TimedRotate::Interrupted() {
	End();
}
