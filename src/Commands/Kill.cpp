#include "Kill.h"

Kill::Kill()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(driveLift);
}

// Called just before this Command runs the first time
void Kill::Initialize()
{
driveLift->SetHeight(0);
}

// Called repeatedly when this Command is scheduled to run
void Kill::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool Kill::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void Kill::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Kill::Interrupted()
{

}
