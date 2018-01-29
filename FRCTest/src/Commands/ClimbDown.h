#ifndef ClimbDown_H
#define ClimbDown_H

#include "../CommandBase.h"

class ClimbDown : public CommandBase {
public:
	ClimbDown();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ClimbUp_H
