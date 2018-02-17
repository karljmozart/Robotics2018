#ifndef TimedDrive_H
#define TimedDrive_H

#include "../CommandBase.h"
#include "WPILib.h"

enum LinearDirection {
	forward = 0,
	backward = 1,
	turnLeft = 2,
	turnRight = 3,
	stop = 4
};

class TimedDrive : public CommandBase {
private:
	LinearDirection dir;
public:
	TimedDrive(double timeout, LinearDirection direction);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // TimedDrive_H
