#include "ClimbSystem.h"
#include "../RobotMap.h"
#include <WPILib.h>
#include "../CommandBase.h"
#include "Commands/ContinuousDrive.h"
#include <iostream>

ClimbSystem::ClimbSystem() : Subsystem("ClimbSystem"){
	climb_motor = new Talon(CLIMBMOTOR);
}

void ClimbSystem::InitDefaultCommand(){

}


void ClimbSystem::ClimbDown(){
	climb_motor->Set(1);

}

void ClimbSystem::ClimbUp(){
	climb_motor->Set(-1);
}
void ClimbSystem::Stop(){
	climb_motor->Set(0);
}
