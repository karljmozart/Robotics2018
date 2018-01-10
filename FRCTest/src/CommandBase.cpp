#include "CommandBase.h"

#include <Commands/Scheduler.h>
#include "Subsystems/DriveMotors.h"





// Initialize a single static instance of all of your subsystems. The following
// line should be repeated for each subsystem in the project.

OI* CommandBase::oi = new OI();
DriveMotors* CommandBase::DriveTrain;

//functions

CommandBase::CommandBase(char const *name) : Command(name) {

}

CommandBase::CommandBase() : Command() {

}

void CommandBase::init() {
	//create Instance
	oi = new OI();
	DriveTrain = new DriveMotors();



}
