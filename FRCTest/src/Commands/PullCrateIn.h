#ifndef PullCrateIn_H
#define PullCrateIn_H

#include "../CommandBase.h"

class PullCrateIn : public CommandBase {
public:
	PullCrateIn();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // PullCrateIn_H
