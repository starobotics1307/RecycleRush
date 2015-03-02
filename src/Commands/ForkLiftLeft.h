#ifndef ForkLiftLeft_H
#define ForkLiftLeft_H

#include "../CommandBase.h"
#include "WPILib.h"

class ForkLiftLeft: public CommandBase
{
public:
	ForkLiftLeft();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
