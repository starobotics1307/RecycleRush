#include "ToClamp.h"

ToClamp::ToClamp()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void ToClamp::Initialize()
{

	claw -> Clamp();
}

// Called repeatedly when this Command is scheduled to run
void ToClamp::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool ToClamp::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void ToClamp::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToClamp::Interrupted()
{

}
