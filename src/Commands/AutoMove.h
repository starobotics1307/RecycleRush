#ifndef AutoMove_H
#define AutoMove_H

#include "../CommandBase.h"
#include "WPILib.h"

class AutoMove: public CommandBase
{
private:

PIDController* pid;
public:
	AutoMove(float dist);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};
class AutoMoveSource: public PIDSource{
public:
	virtual ~AutoMoveSource();
	double PIDGet();
};
class AutoMoveOutput: public PIDOutput{
public:
	virtual ~AutoMoveOutput();
	void PIDWrite(float d);
};
#endif
