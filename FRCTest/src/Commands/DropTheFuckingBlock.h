#ifndef DropTheFuckingBlock_H
#define DropTheFuckingBlock_H

#include "../CommandBase.h"

class DropTheFuckingBlock : public CommandBase {
public:
	DropTheFuckingBlock(double timeout);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DropTheFuckingBlock_H
