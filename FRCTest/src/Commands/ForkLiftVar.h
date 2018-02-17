#ifndef ForkLiftVar_H
#define ForkLiftVar_H

#include "../CommandBase.h"

class ForkLiftVar : public CommandBase {
public:
	Joystick *thumbstick;
	ForkLiftVar();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ForkLiftVar_H
