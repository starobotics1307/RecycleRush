#include "ForkLiftLeft.h"

ForkLiftLeft::ForkLiftLeft()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(leftFork);

}

// Called just before this Command runs the first time
void ForkLiftLeft::Initialize()
{
leftFork->SetLeftFork(DELTA);
}

// Called repeatedly when this Command is scheduled to run
void ForkLiftLeft::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool ForkLiftLeft::IsFinished()
{
	return leftFork->OnTarget();
}

// Called once after isFinished returns true
void ForkLiftLeft::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ForkLiftLeft::Interrupted()
{

}
