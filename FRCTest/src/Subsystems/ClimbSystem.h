#pragma once
#include "Commands/Subsystem.h"
#include <WPILib.h>

class ClimbSystem : public Subsystem{
	Talon *climb_motor_1;
	Talon *climb_motor_2;
public:
	ClimbSystem();
	void InitDefaultCommand();
	void ClimbDown();
	void Stop();
	void ClimbUp();
	void liftValue(double lift);
};

