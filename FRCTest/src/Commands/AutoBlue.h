#ifndef AutoBlue_H
#define AutoBlue_H

#include "../CommandBase.h"
#include <memory>
#include "WPILib.h"
#include <string>
#include <iostream>

struct limeBlue {
	limeBlue();
	std::shared_ptr<NetworkTable> limelighttable;
	void ledOff();
};

class AutoBlue : public CommandBase {
public:
	AutoBlue();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
	limeBlue* blue1;
};

#endif  // AutoBlue_H
