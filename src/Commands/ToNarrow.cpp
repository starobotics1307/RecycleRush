#include "ToNarrow.h"

ToNarrow::ToNarrow()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void ToNarrow::Initialize()
{
	claw -> Wide();
		Wait(0.5);
	claw -> Narrow();
}

// Called repeatedly when this Command is scheduled to run
void ToNarrow::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool ToNarrow::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void ToNarrow::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToNarrow::Interrupted()
{

}
