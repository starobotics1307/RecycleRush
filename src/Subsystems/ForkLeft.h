#ifndef ForkLeft_H
#define ForkLeft_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

class ForkLeft: public PIDSubsystem
{
public:
	Encoder* encoderLeft;
		SpeedController* speedcontrollerLeft;


	ForkLeft();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
	void SetLeftFork(double leftFork);

};

#endif
