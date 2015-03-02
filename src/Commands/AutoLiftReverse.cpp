#include "AutoLiftReverse.h"

AutoLiftReverse::AutoLiftReverse()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(driveLift);
}

// Called just before this Command runs the first time
void AutoLiftReverse::Initialize()
{
driveLift->SetHeight(-DELTA);
}

// Called repeatedly when this Command is scheduled to run
void AutoLiftReverse::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool AutoLiftReverse::IsFinished()
{
	return driveLift->OnTarget();
}

// Called once after isFinished returns true
void AutoLiftReverse::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoLiftReverse::Interrupted()
{

}
