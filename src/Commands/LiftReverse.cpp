#include "LiftReverse.h"
#include "RobotMap.h"
LiftReverse::LiftReverse()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(driveLift);
}

// Called just before this Command runs the first time
void LiftReverse::Initialize()
{
	driveLift->SetHeight(-DELTA);
}

// Called repeatedly when this Command is scheduled to run
void LiftReverse::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool LiftReverse::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void LiftReverse::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LiftReverse::Interrupted()
{

}
