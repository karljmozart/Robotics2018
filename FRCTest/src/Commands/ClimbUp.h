#ifndef ClimbUp_H
#define ClimbUp_H

#include "../CommandBase.h"

class ClimbUp : public CommandBase {
public:
	ClimbUp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ClimbUp_H
