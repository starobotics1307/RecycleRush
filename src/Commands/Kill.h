#ifndef Kill_H
#define Kill_H

#include "../CommandBase.h"
#include "WPILib.h"

class Kill: public CommandBase
{
public:
	Kill();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
