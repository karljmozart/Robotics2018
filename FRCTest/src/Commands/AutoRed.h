#ifndef AutoRed_H
#define AutoRed_H

#include "../CommandBase.h"

struct limeRed {
	limeRed();
	std::shared_ptr<NetworkTable> limelighttable;
	void ledOn();
};

class AutoRed : public CommandBase {
public:
	AutoRed();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
	limeRed* red1;
};

#endif  // AutoRed_H
