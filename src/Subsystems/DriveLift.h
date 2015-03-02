#ifndef DriveLift_H
#define DriveLift_H

#include "Commands/PIDSubsystem.h"
#include "RobotMap.h"
#include "WPILib.h"

class DriveLift: public PIDSubsystem
{
public:

	Encoder* encoder;
	SpeedController* speedcontroller;
	SpeedController* speedcontrollertwo;



    bool top = false;
    double t = TOP;
    double b = BOT;
	DriveLift();
	double ReturnPIDInput();

	void UsePIDOutput(double output);
    void InitDefaultCommand();
	void SetHeight(double height);





};

#endif
