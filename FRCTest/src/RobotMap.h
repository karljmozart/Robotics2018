/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
//const int LEFTFRONT = 3;
//const int LEFTBACK = 2;
//const int RIGHTFRONT = 0;
//const int RIGHTBACK = 1;
const int CLIMBMOTOR = 4;
const int LEFTFRONT = 1;
const int LEFTBACK = 1;
const int RIGHTFRONT = 0;
const int RIGHTBACK = 0;
const int FORKROTATE = 2;
const int FORKGRABBER = 3;
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// constexpr int kLeftMotor = 1;
// constexpr int kRightMotor = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// constexpr int kRangeFinderPort = 1;
// constexpr int kRangeFinderModule = 1;
