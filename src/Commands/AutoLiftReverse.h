#ifndef AutoLiftReverse_H
#define AutoLiftReverse_H

#include "../CommandBase.h"
#include "WPILib.h"

class AutoLiftReverse: public CommandBase
{
public:
	AutoLiftReverse();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
