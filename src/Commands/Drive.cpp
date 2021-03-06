#include "Drive.h"

Drive::Drive()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(driveTrain);

}

// Called just before this Command runs the first time
void Drive::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void Drive::Execute()
{
	//gets input from Joysticks in OI and passes them to the 4 talons in DriveTrain.cpp
driveTrain->TankDrive(oi->getlstick(), oi->getrstick());

}

// Make this return true when this Command no longer needs to run execute()
bool Drive::IsFinished()
{

	return false;
}

// Called once after isFinished returns true
void Drive::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Drive::Interrupted()
{

}
