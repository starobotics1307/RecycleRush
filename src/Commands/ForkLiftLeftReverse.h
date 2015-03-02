#ifndef ForkLiftLeftReverse_H
#define ForkLiftLeftReverse_H

#include "../CommandBase.h"
#include "WPILib.h"

class ForkLiftLeftReverse: public CommandBase
{
public:
	ForkLiftLeftReverse();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
