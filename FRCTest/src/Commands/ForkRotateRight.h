#ifndef ForkRotateRight_H
#define ForkRotateRight_H

#include "../CommandBase.h"

class ForkRotateRight : public CommandBase {
public:
	ForkRotateRight();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ForkRotateRight_H
