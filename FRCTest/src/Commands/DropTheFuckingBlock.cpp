#include "DropTheFuckingBlock.h"

DropTheFuckingBlock::DropTheFuckingBlock(double timeout) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	SetTimeout(timeout);
	Requires(Grabber);
}

// Called just before this Command runs the first time
void DropTheFuckingBlock::Initialize() {
	Grabber->Stop();
}

// Called repeatedly when this Command is scheduled to run
void DropTheFuckingBlock::Execute() {
	while(IsTimedOut() == false){
		Grabber->PushOut();
	}
}

// Make this return true when this Command no longer needs to run execute()
bool DropTheFuckingBlock::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void DropTheFuckingBlock::End() {
	Grabber->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DropTheFuckingBlock::Interrupted() {
	End();
}
