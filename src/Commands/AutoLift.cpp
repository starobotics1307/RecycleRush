#include "AutoLift.h"

AutoLift::AutoLift()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(driveLift);
}

// Called just before this Command runs the first time
void AutoLift::Initialize()
{
driveLift->SetHeight(DELTA);
}

// Called repeatedly when this Command is scheduled to run
void AutoLift::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool AutoLift::IsFinished()
{
	return driveLift->OnTarget();
}

// Called once after isFinished returns true
void AutoLift::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoLift::Interrupted()
{

}
