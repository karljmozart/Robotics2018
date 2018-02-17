#include "CommandBase.h"

#include <Commands/Scheduler.h>
#include "Subsystems/DriveMotors.h"
#include "Subsystems/ClimbSystem.h"
#include "Subsystems/RotateMotor.h"
#include "Subsystems/GrabberWheels.h"




// Initialize a single static instance of all of your subsystems. The following
// line should be repeated for each subsystem in the project.

OI* CommandBase::oi = new OI();
DriveMotors* CommandBase::DriveTrain;
ClimbSystem* CommandBase::ClimbSys;
RotateMotor* CommandBase::Rotation;
GrabberWheels* CommandBase::Grabber;

//functions

CommandBase::CommandBase(char const *name) : Command(name) {

}

CommandBase::CommandBase() : Command() {

}

void CommandBase::init() {
	//create Instance
	oi = new OI();
	DriveTrain = new DriveMotors();
	ClimbSys = new ClimbSystem();
	Rotation = new RotateMotor();
	Grabber = new GrabberWheels();
}
