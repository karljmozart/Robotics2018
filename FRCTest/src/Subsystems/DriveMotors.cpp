#include "DriveMotors.h"
#include "../RobotMap.h"
#include "Commands/ContinuousDrive.h"
DriveMotors::DriveMotors() : Subsystem("DriveMotors") {
	leftBack = new Talon(LEFTBACK);
	leftFront = new Talon(LEFTFRONT);
	rightBack = new Talon(RIGHTBACK);
	rightFront = new Talon(RIGHTFRONT);
	drive = new RobotDrive(leftFront, leftBack, rightFront, rightBack);
}

void DriveMotors::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	ContinuousDrive *c = new ContinuousDrive();
	SetDefaultCommand(c);
}

void DriveMotors::DriveForward(){
	leftBack->Set(1);
	leftFront->Set(1);
	rightBack->Set(-1);
	rightFront->Set(-1);
}

void DriveMotors::Stop(){
	leftBack->Set(0);
	leftFront->Set(0);
	rightBack->Set(0);
	rightFront->Set(0);
}

void DriveMotors::DriveBackward(){
	leftBack->Set(-1);
	leftFront->Set(-1);
	rightFront->Set(1);
	rightBack->Set(1);
}
void DriveMotors::ArcadeDrive(float x, float y){
	drive->ArcadeDrive(y, x, true);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
