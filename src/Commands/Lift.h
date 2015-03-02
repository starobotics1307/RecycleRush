#ifndef Lift_H
#define Lift_H

#include "../CommandBase.h"
#include "WPILib.h"


class Lift: public CommandBase
{
public:
	Lift();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
