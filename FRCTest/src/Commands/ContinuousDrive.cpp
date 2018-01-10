#include "ContinuousDrive.h"

ContinuousDrive::ContinuousDrive() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(DriveTrain);
	stick = oi->GetDriveJoy;
}

// Called just before this Command runs the first time
void ContinuousDrive::Initialize() {
	DriveTrain->Stop();
}

// Called repeatedly when this Command is scheduled to run
void ContinuousDrive::Execute() {
	float x = stick->GetX();
	float y = stick->GetY();
	DriveTrain->ArcadeDrive(x, y);
}

// Make this return true when this Command no longer needs to run execute()
bool ContinuousDrive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ContinuousDrive::End() {
	DriveTrain->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ContinuousDrive::Interrupted() {
	End();
}
