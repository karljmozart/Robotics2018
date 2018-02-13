#include "GrabberWheels.h"
#include "../RobotMap.h"

GrabberWheels::GrabberWheels() : Subsystem("GrabberWheels") {
	grabber = new Talon(FORKGRABBER);
}

void GrabberWheels::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

void GrabberWheels::PullIn(){
	grabber->Set(1);
}

void GrabberWheels::PushOut(){
	grabber->Set(-1);
}

void GrabberWheels::Stop(){
	grabber->Set(0);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
