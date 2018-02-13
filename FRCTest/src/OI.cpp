/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <WPILib.h>
#include "Commands/ContinuousDrive.h"
#include "Commands/Forward.h"
#include "Commands/ClimbUp.h"
#include "Commands/ClimbDown.h"
#include "Commands/limelight.h"
#include "Commands/ForkRotateLeft.h"
#include "Commands/ForkRotateRight.h"
#include "Commands/AutoBlue.h"
#include "Commands/AutoRed.h"
#include "Commands/PushCrateOut.h"
#include "Commands/PullCrateIn.h"

OI::OI() {
	// Process operator interface input here.
	driveJoy= new Joystick(1);
	xbox = new Joystick(2);
 //joystick buttons
	b1 = new JoystickButton(driveJoy, 1);
	b2 = new JoystickButton(driveJoy, 2);
	b3 = new JoystickButton(driveJoy, 3);
	b4 = new JoystickButton(driveJoy, 4);
	b5 = new JoystickButton(driveJoy, 5);
	b6 = new JoystickButton(driveJoy, 6);
	b7 = new JoystickButton(driveJoy, 7);
	b8 = new JoystickButton(driveJoy, 8);
	b9 = new JoystickButton(driveJoy, 9);
	b10 = new JoystickButton(driveJoy, 10);
	b11 = new JoystickButton(driveJoy, 11);
	b12 = new JoystickButton(driveJoy, 12);

	A = new JoystickButton(xbox, 1);
	B = new JoystickButton(xbox, 2);
	X = new JoystickButton(xbox, 3);
	Y = new JoystickButton(xbox, 4);
	LB = new JoystickButton(xbox, 5);
	RB = new JoystickButton(xbox, 6);

	A->WhileHeld(new PullCrateIn());
	B->WhileHeld(new PushCrateOut());
	b5->WhileHeld(new ClimbUp());
	b6->WhileHeld(new ClimbDown());
	b3->WhileHeld(new ForkRotateLeft());
	b4->WhileHeld(new ForkRotateRight());
	b5->WhenPressed(new AutoBlue());
	b6->WhenPressed(new AutoRed());
	//b7->WhileHeld(new PullCrateIn());
	//b8->WhileHeld(new PushCrateOut());
}
Joystick *OI::GetDriveJoy(){
	return driveJoy;
}
Joystick *OI::GetXbox(){
	return xbox;
}
