#ifndef ContinuousDrive_H
#define ContinuousDrive_H

#include <CommandBase.h>

class ContinuousDrive : public CommandBase {
public:
	Joystick *stick;
	ContinuousDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ContinuousDrive_H
