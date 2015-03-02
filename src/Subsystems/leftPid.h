#ifndef leftPid_H
#define leftPid_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

class leftPid: public PIDSubsystem
{
public:
SpeedController *leftTalon;
Encoder* leftEncoder;

	leftPid();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
    void leftMotor(double);
};

#endif
