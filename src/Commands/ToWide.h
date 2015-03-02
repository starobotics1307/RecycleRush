#ifndef ToWide_H
#define ToWide_H

#include "../CommandBase.h"
#include "WPILib.h"

class ToWide: public CommandBase
{
public:
	ToWide();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
