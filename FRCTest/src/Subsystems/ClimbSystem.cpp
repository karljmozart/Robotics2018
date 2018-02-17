#include "ClimbSystem.h"
#include "../RobotMap.h"
#include <WPILib.h>
#include "../CommandBase.h"
#include "Commands/ContinuousDrive.h"
#include <iostream>
#include "Commands/ForkLiftVar.h"

ClimbSystem::ClimbSystem() : Subsystem("ClimbSystem"){
	climb_motor_1 = new Talon(CLIMBMOTOR1);
	climb_motor_2 = new Talon(CLIMBMOTOR2);
}

void ClimbSystem::InitDefaultCommand(){
	ForkLiftVar *f = new ForkLiftVar();
	SetDefaultCommand(f);
}


void ClimbSystem::ClimbDown(){
	climb_motor_1->Set(1);
	climb_motor_2->Set(-1);

}

void ClimbSystem::ClimbUp(){
	climb_motor_1->Set(-1);
	climb_motor_2->Set(1);
}
void ClimbSystem::Stop(){
	climb_motor_1->Set(0);
	climb_motor_2->Set(0);
}

void ClimbSystem::liftValue(double lift){
	climb_motor_1->Set(-lift);
	climb_motor_2->Set(lift);
}
