#pragma once
#include "Commands/Subsystem.h"
#include <WPILib.h>

class ClimbSystem : public Subsystem{
	Talon *climb_motor;
public:
	ClimbSystem();
	void InitDefaultCommand();
	void ClimbDown();
	void Stop();
	void ClimbUp();
};

