#ifndef AutoTurn_H
#define AutoTurn_H

#include "../CommandBase.h"
#include "WPILib.h"

class AutoTurn: public CommandBase
{
private:

	PIDController* pid;
public:
	AutoTurn(float deg);

	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};
class AutoTurnSource: public PIDSource{
public:
	virtual ~AutoTurnSource();
	double PIDGet();
};
class AutoTurnOutput: public PIDOutput{
public:
	virtual ~AutoTurnOutput();
	void PIDWrite(float d);
};
#endif
