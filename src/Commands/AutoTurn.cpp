#include "AutoTurn.h"

AutoTurn::AutoTurn(float degrees)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(driveTrain);
	//revolution = degrees/360.0;
	pid = new PIDController(1.0, 0.0, 0.0, new AutoTurnSource(), new AutoTurnOutput());
	pid->SetPercentTolerance(.02);
	pid->SetOutputRange(-0.75, 0.75);
	pid->SetContinuous(false);
	pid->SetSetpoint((degrees/360.0));
}


// Called just before this Command runs the first time
void AutoTurn::Initialize()
{
	//driveTrain->AutoDrive(revolution*26.5, -revolution*26.5);
	driveTrain->leftEncoder->Reset();
	driveTrain->rightEncoder->Reset();
	pid->Reset();
	pid->Enable();
		//driveTrain->AutoDrive(10.0, 10.0);
		//
	printf("AutoMove::Init()\n");

}

// Called repeatedly when this Command is scheduled to run
void AutoTurn::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool AutoTurn::IsFinished()
{
	printf("GetError() %f \n", fabs(pid->GetError()));
		//return pid->OnTarget();
		return fabs(pid->GetError()) < 0.05;
}

// Called once after isFinished returns true
void AutoTurn::End()
{
	pid->Disable();
	driveTrain->AutoDrive(0.0, 0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoTurn::Interrupted()
{
End();
}
AutoTurnSource::~AutoTurnSource(){}
double AutoTurnSource::PIDGet(){
double get = (AutoTurn::driveTrain->rightEncoder->PIDGet() + AutoTurn::driveTrain->leftEncoder->PIDGet())/2.0;
printf("AutoTurnPidGet:%f\n", get);
return (AutoTurn::driveTrain->rightEncoder->PIDGet() + AutoTurn::driveTrain->leftEncoder->PIDGet())/2.0;
}
AutoTurnOutput::~AutoTurnOutput(){}
void AutoTurnOutput::PIDWrite(float d){
	printf("AutoTurnOutput:PidWrite:D:%f", d);
	AutoTurn::driveTrain->AutoDrive(d, -d);
}
