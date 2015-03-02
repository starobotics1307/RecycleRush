#ifndef Claw_H
#define Claw_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Claw: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	DoubleSolenoid* solenoidIn;
	DoubleSolenoid* solenoidOut;
	Compressor* comp;

public:
	void Clamp();
		void Narrow();
		void Wide();
		void Compress();
	Claw();
	void InitDefaultCommand();
};

#endif
