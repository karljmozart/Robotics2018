/*
 * limelight.cpp
 *
 *  Created on: Feb 2, 2018
 *      Author: Robotics
 */
#include "limelight.h"

limelightData::limelightData(){
	limelighttable =  NetworkTable::GetTable("limelight");
	targetOffsetAngle_Horizontal = limelighttable->GetNumber("tx",0);
	targetOffsetAngle_Vertical = limelighttable->GetNumber("ty",0);
	targetArea = limelighttable->GetNumber("ta",0);
	targetSkew = limelighttable->GetNumber("ts",0);
}

void limelightData::log_all(){
	std::cout<<"Target Offset Angle Horizontal: "<<targetOffsetAngle_Horizontal<<std::endl;
	std::cout<<"Target Offset Angle Vertical: "<<targetOffsetAngle_Vertical<<std::endl;
	std::cout<<"Target Area: "<<targetArea<<std::endl;
	std::cout<<"Target Skew: "<<targetSkew<<std::endl;
}

limeLog::limeLog() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	limeData1 = new limelightData();
}

// Called just before this Command runs the first time
void limeLog::Initialize() {
	std::cout<<"initialized"<<std::endl;
}

// Called repeatedly when this Command is scheduled to run
void limeLog::Execute() {
	limelightData* newInstance = new limelightData();
	newInstance->log_all();
	delete newInstance;
}

// Make this return true when this Command no longer needs to run execute()
bool limeLog::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void limeLog::End() {
	std::cout<<"process terminated"<<std::endl;
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void limeLog::Interrupted() {
	End();
}



