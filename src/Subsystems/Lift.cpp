#include "Lift.h"
#include "../RobotMap.h"

Lift::Lift() :
		PIDSubsystem("ExampleSubsystem", 1, 0, 0, .5)
{

}

void Lift::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
