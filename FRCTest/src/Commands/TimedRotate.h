#ifndef TimedRotate_H
#define TimedRotate_H

#include "../CommandBase.h"

class TimedRotate : public CommandBase {
public:
	TimedRotate(double timeout);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // TimedRotate_H
