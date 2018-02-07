#ifndef AutoDrive_H
#define AutoDrive_H

#include "../CommandBase.h"
#include "limelight.h"
class AutoDrive : public CommandBase {
private:
	std::shared_ptr<NetworkTable> limelighttable;
public:
	AutoDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // AutoDrive_H
