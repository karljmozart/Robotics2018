#include "TimedDrive.h"

TimedDrive::TimedDrive(double timeout, LinearDirection direction) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	//Requires(DriveTrain);
	SetTimeout(timeout);
	dir = direction;
}

// Called just before this Command runs the first time
void TimedDrive::Initialize() {
	DriveTrain->Stop();
}

// Called repeatedly when this Command is scheduled to run
void TimedDrive::Execute() {

	while(IsTimedOut() == false){

	if(dir == forward){
		DriveTrain->DriveForward();
	} else if(dir == backward) {
		DriveTrain->DriveBackward();
	} else if(dir == turnLeft){
		DriveTrain->TurnLeft();
	} else if(dir == turnRight){
		DriveTrain->TurnRight();
	} else if(dir == stop){
		DriveTrain->Stop();
	}
	}
}

// Make this return true when this Command no longer needs to run execute()
bool TimedDrive::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void TimedDrive::End() {
	DriveTrain->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TimedDrive::Interrupted() {
	End();
}
