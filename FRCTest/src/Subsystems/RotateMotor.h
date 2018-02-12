#ifndef RotateMotor_H
#define RotateMotor_H

#include <Commands/Subsystem.h>
#include "WPILib.h"

class RotateMotor : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Talon *rotateMotor;
public:
	RotateMotor();
	void InitDefaultCommand();
	void RotateLeft();
	void RotateRight();
	void Stop();
};

#endif  // RotateMotor_H
