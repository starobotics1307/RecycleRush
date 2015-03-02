#include "leftPid.h"
#include "../RobotMap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"

leftPid::leftPid() :
		PIDSubsystem("leftPid", 1.0, 0.0, 0.0)
{
	// Use these to get going:
	// SetSetpoint() -  Sets where the PID controller should move the system
	//                  to
	// Enable() - Enables the PID controller.
	leftEncoder = new Encoder(3, 4, false, Encoder::k1X);
	   // leftEncoder->Reset();
		leftEncoder->SetPIDSourceParameter(kDistance);
		leftEncoder->SetDistancePerPulse(1.0/360.0);
		leftTalon = new Talon(f_L_TAL);

		GetPIDController()->SetContinuous(false);
	    GetPIDController()->SetAbsoluteTolerance(.1);
		SetOutputRange(-0.25, 0.625);
		SetSetpoint(BOT);
		//Enable();
}

double leftPid::ReturnPIDInput()
{
	// Return your input value for the PID loop
	// e.g. a sensor, like a potentiometer:
	// yourPot->SetAverageVoltage() / kYourMaxVoltage;
	return leftEncoder->PIDGet();
}

void leftPid::UsePIDOutput(double output)
{
	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);
	leftTalon->PIDWrite(output);
}

void leftPid::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//setDefaultCommand(new MySpecialCommand());
}
void leftPid::leftMotor(double power){

Enable();
leftEncoder->Reset();
SetSetpoint(power);
}
