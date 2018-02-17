#include "AutoColor.h"
#include "AutoRed.h"
#include "AutoBlue.h"

AutoColor::AutoColor(int teamColor) {
	// turn led off
	pipe = teamColor;

}

// Called just before this Command runs the first time
void AutoColor::Initialize() {
	limelighttable->PutNumber("ledMode", 1);
}

// Called repeatedly when this Command is scheduled to run
void AutoColor::Execute() {
	if(pipe == 1){
		limelighttable->PutNumber("pipeline", 1);
}
}

// Make this return true when this Command no longer needs to run execute()
bool AutoColor::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void AutoColor::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoColor::Interrupted() {

}
