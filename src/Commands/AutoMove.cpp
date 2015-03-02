#include <Commands/AutoMove.h>

AutoMove::AutoMove(float distance)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
Requires(driveTrain);
pid = new PIDController(1.0, 0.0, 0.0, new AutoMoveSource(), new AutoMoveOutput());
pid->SetPercentTolerance(0.2);
pid->SetOutputRange(-0.75, 0.75);
pid->SetContinuous(false);
pid->SetSetpoint((distance*4.5));
}

// Called just before this Command runs the first time
void AutoMove::Initialize()
{
driveTrain->leftEncoder->Reset();
driveTrain->rightEncoder->Reset();
pid->Reset();
pid->Enable();
	//driveTrain->AutoDrive(10.0, 10.0);
	//
printf("AutoMove::Init()\n");
}

// Called repeatedly when this Command is scheduled to run
void AutoMove::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool AutoMove::IsFinished()
{
	//printf("LeftPID:%f RightPID:%f",driveTrain->leftEncoder->PIDGet(), driveTrain->rightEncoder->PIDGet());
	//printf("AutoMove::IsFinished() PidTarget:%d\n", pid->OnTarget());
     printf("GetError() %f \n", fabs(pid->GetError()));
	//return pid->OnTarget();
	return fabs(pid->GetError()) < 0.05;
}

// Called once after isFinished returns true
void AutoMove::End()
{
pid->Disable();
driveTrain->AutoDrive(0.0, 0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoMove::Interrupted()
{
End();
}

AutoMoveSource::~AutoMoveSource(){}
double AutoMoveSource::PIDGet(){
double get = (AutoMove::driveTrain->rightEncoder->PIDGet() + AutoMove::driveTrain->leftEncoder->PIDGet())/2.0;
printf("Pid:%f\n", get);
return (AutoMove::driveTrain->rightEncoder->PIDGet() + AutoMove::driveTrain->leftEncoder->PIDGet())/2.0;
}
AutoMoveOutput::~AutoMoveOutput(){}
void AutoMoveOutput::PIDWrite(float d){
	printf("PidWrite:D:%f", -d);
	AutoMove::driveTrain->AutoDrive(-d, -d);
}
