#include "DriveTrain.h"
#include "../RobotMap.h"
#include "../Commands/Drive.h"

DriveTrain::DriveTrain() :
		Subsystem("DriveTrain")
{
	robotDrive = new RobotDrive(FRONT_LEFT_MOTOR_CHANNEL, REAR_LEFT_MOTOR_CHANNEL,
			FRONT_RIGHT_MOTOR_CHANNEL, REAR_RIGHT_MOTOR_CHANNEL);
}

void DriveTrain::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	SetDefaultCommand(new Drive());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void DriveTrain::TankDrive(Joystick *leftStick, Joystick *rightStick) {
	robotDrive->TankDrive(leftStick, rightStick);
}
