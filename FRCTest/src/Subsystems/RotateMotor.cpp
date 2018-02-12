#include "RotateMotor.h"
#include "../RobotMap.h"


RotateMotor::RotateMotor() : Subsystem("RotateMotor") {
	rotateMotor = new Talon (FORKROTATE);
}

void RotateMotor::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());


}

void RotateMotor::RotateLeft(){
	rotateMotor->Set(1);
}

void RotateMotor::RotateRight(){
	rotateMotor->Set(-1);
}

void RotateMotor::Stop(){
	rotateMotor->Set(0);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
