#ifndef DriveTrain_H
#define DriveTrain_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveTrain: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	RobotDrive *robotDrive;

public:
	DriveTrain();
	void InitDefaultCommand();
	void TankDrive(Joystick *leftStick, Joystick *rightStick);
};

#endif
