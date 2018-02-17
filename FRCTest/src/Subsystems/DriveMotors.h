#ifndef DriveMotors_H
#define DriveMotors_H

#include "Commands/Subsystem.h"
#include <WPILib.h>
class DriveMotors : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Talon *right;
	Talon *left;
	RobotDrive *drive;
public:
	DriveMotors();
	void InitDefaultCommand();
	void DriveForward();
	void Stop();
	void DriveBackward();
	void TurnLeft();
	void TurnRight();
	void ArcadeDrive(float x, float y);
};

#endif  // DriveMotors_H
