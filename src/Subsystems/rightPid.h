#ifndef rightPid_H
#define rightPid_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

class rightPid: public PIDSubsystem
{
public:
	SpeedController *rightTalon;
	Encoder* rightEncoder;
	rightPid();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
	void rightMotor(double);
};

#endif
