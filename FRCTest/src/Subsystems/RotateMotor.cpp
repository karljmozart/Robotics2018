#include "RotateMotor.h"
#include "../RobotMap.h"
#include "WPILib.h"
#include "Commands/ForkRotateVar.h"


RotateMotor::RotateMotor() : Subsystem("RotateMotor") {
	rotateMotor = new Talon (FORKROTATE);
}

void RotateMotor::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	ForkRotateVar *f = new ForkRotateVar();
	SetDefaultCommand(f);
}

void RotateMotor::RotateLeft(){
	rotateMotor->Set(0.45);
}

void RotateMotor::RotateRight(){
	rotateMotor->Set(-0.45);
}
void RotateMotor::rotateValue(double direction){
	rotateMotor->Set(direction);
}

void RotateMotor::Stop(){
	rotateMotor->Set(0);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
