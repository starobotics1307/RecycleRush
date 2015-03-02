#ifndef LiftReverse_H
#define LiftReverse_H

#include "../CommandBase.h"
#include "WPILib.h"

class LiftReverse: public CommandBase
{
public:
	LiftReverse();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
