
#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include <memory>
#include <string>

#include "Commands/Command.h"
#include "Subsystems/DriveMotors.h"
#include "Subsystems/ClimbSystem.h"
#include "WPILib.h"
#include "OI.h"


/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use
 * CommandBase::exampleSubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(char const *name);
	CommandBase();

	static void init();

	std::shared_ptr<NetworkTable> table = NetworkTable::GetTable("limelight");
	float targetOffsetAngle_Horizontal = table->GetNumber("tx", 0);

	//create instances here *static*
	static OI *oi;
	static DriveMotors *DriveTrain;
	static ClimbSystem *ClimbSys;

};

#endif  // COMMAND_BASE_H
