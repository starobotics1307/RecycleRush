#ifndef AutoLift_H
#define AutoLift_H

#include "../CommandBase.h"
#include "WPILib.h"

class AutoLift: public CommandBase
{
public:
	AutoLift();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
