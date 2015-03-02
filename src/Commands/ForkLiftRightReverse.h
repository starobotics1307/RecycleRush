#ifndef ForkLiftRightReverse_H
#define ForkLiftRightReverse_H

#include "../CommandBase.h"
#include "WPILib.h"

class ForkLiftRightReverse: public CommandBase
{
public:
	ForkLiftRightReverse();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
