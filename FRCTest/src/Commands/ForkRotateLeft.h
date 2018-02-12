#ifndef ForkRotateLeft_H
#define ForkRotateLeft_H

#include "../CommandBase.h"

class ForkRotateLeft : public CommandBase {
public:
	ForkRotateLeft();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ForkRotateLeft_H
