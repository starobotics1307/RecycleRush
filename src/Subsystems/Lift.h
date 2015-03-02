#ifndef Lift_H
#define Lift_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

class Lift: public PIDSubsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Lift();
	void InitDefaultCommand();
};

#endif
