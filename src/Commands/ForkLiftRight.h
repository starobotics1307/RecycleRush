#ifndef ForkLiftRight_H
#define ForkLiftRight_H

#include "../CommandBase.h"
#include "WPILib.h"

class ForkLiftRight: public CommandBase
{
public:
	ForkLiftRight();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
