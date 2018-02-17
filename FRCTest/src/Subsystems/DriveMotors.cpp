#include "DriveMotors.h"
#include "WPILib.h"
#include "../RobotMap.h"
#include "Commands/ContinuousDrive.h"
#include "Commands/Forward.h"
DriveMotors::DriveMotors() : Subsystem("DriveMotors") {
	left = new Talon(LEFT);
	right = new Talon(RIGHT);
	drive = new RobotDrive(left, right);
}

void DriveMotors::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	ContinuousDrive *c = new ContinuousDrive();
	SetDefaultCommand(c);
}

void DriveMotors::DriveForward(){
	left->Set(0.3);
	right->Set(-0.3);
}

void DriveMotors::Stop(){
	left->Set(0);
	right->Set(0);
}

void DriveMotors::DriveBackward(){
	left->Set(-0.3);
	right->Set(0.3);
}

void DriveMotors::TurnLeft(){
	left->Set(-0.3);
	right->Set(-0.3);
}

void DriveMotors::TurnRight(){
	left->Set(0.3);
	right->Set(0.3);
}

void DriveMotors::ArcadeDrive(float x, float y){
	drive->ArcadeDrive(y, x, true);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
