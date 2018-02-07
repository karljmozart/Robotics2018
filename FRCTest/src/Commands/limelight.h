#ifndef SRC_COMMANDS_LIMELIGHT_H_
#define SRC_COMMANDS_LIMELIGHT_H_

#include <memory>
#include <string>
#include "WPILib.h"
#include <iostream>
#include "../CommandBase.h"



struct limelightData{

	limelightData();
	std::shared_ptr<NetworkTable> limelighttable;
	float targetOffsetAngle_Horizontal;
	float targetOffsetAngle_Vertical;
	float targetArea;
	float targetSkew;
	void log_all();
};

class limeLog : public CommandBase {
public:
	limeLog();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
	limelightData* limeData1;
};

#endif /* SRC_COMMANDS_LIMELIGHT_H_ */
