#ifndef ToClamp_H
#define ToClamp_H

#include "../CommandBase.h"
#include "WPILib.h"

class ToClamp: public CommandBase
{
public:
	ToClamp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
