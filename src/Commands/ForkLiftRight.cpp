#include "ForkLiftRight.h"

ForkLiftRight::ForkLiftRight()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(rightFork);
}

// Called just before this Command runs the first time
void ForkLiftRight::Initialize()
{
	rightFork->SetRightFork(DELTA);
}

// Called repeatedly when this Command is scheduled to run
void ForkLiftRight::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool ForkLiftRight::IsFinished()
{
	return rightFork->OnTarget();
}

// Called once after isFinished returns true
void ForkLiftRight::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ForkLiftRight::Interrupted()
{

}
