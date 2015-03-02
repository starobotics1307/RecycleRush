#ifndef DriveTrain_H
#define DriveTrain_H

#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "PIDController.h"
class DriveTrain: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	RobotDrive* robotDrive;



public:


      Encoder* leftEncoder;
          Encoder* rightEncoder;

          SpeedController* leftTalon;
          SpeedController* rightTalon;

	DriveTrain();
	void InitDefaultCommand();
	void TankDrive(Joystick*rstick, Joystick*lstick);
	void AutoDrive(float, float);

};

#endif
