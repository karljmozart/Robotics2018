#ifndef GrabberWheels_H
#define GrabberWheels_H

#include <Commands/Subsystem.h>
#include "WPILib.h"

class GrabberWheels : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Talon *grabber;

public:
	GrabberWheels();
	void InitDefaultCommand();
	void PullIn();
	void PushOut();
	void Stop();
};

#endif  // GrabberWheels_H
