#ifndef ToNarrow_H
#define ToNarrow_H

#include "../CommandBase.h"
#include "WPILib.h"

class ToNarrow: public CommandBase
{
public:
	ToNarrow();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
