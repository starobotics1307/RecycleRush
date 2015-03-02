#ifndef ForkRight_H
#define ForkRight_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

class ForkRight: public PIDSubsystem
{
public:
	Encoder* encoderRight;
		SpeedController* speedcontrollerRight;
	ForkRight();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
	void SetRightFork(double rightFork);
};

#endif
