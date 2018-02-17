#ifndef AutoColor_H
#define AutoColor_H

#include "../CommandBase.h"

class AutoColor : public CommandBase {
public:
	AutoColor(int);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	int pipe;
	std::shared_ptr<NetworkTable> limelighttable;
};

#endif  // AutoColor_H
