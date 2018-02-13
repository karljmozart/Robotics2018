#ifndef PushCrateOut_H
#define PushCrateOut_H

#include "../CommandBase.h"

class PushCrateOut : public CommandBase {
public:
	PushCrateOut();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // PushCrateOut_H
