#ifndef ForkRotateVar_H
#define ForkRotateVar_H

#include "../CommandBase.h"

class ForkRotateVar : public CommandBase {
public:
	Joystick* thumbstick;
	ForkRotateVar();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ForkRotateVar_H
