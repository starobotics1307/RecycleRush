#include "rightPid.h"
#include "../RobotMap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"

rightPid::rightPid() :
		PIDSubsystem("rightPid", 1.0, 0.0, 0.0)
{
	// Use these to get going:
	// SetSetpoint() -  Sets where the PID controller should move the system
	//                  to
	// Enable() - Enables the PID controller.
	rightEncoder = new Encoder(7, 8, false, Encoder::k1X);
		    //rightEncoder->Reset();
			rightEncoder->SetPIDSourceParameter(kDistance);
			rightEncoder->SetDistancePerPulse(1.0/360.0);
			rightTalon = new Talon(f_L_TAL);

			GetPIDController()->SetContinuous(false);
		    GetPIDController()->SetAbsoluteTolerance(.1);
			SetOutputRange(-0.25, 0.625);
			SetSetpoint(BOT);
			//Enable();
}

double rightPid::ReturnPIDInput()
{
	// Return your input value for the PID loop
	// e.g. a sensor, like a potentiometer:
	// yourPot->SetAverageVoltage() / kYourMaxVoltage;
	return rightEncoder->PIDGet();
}

void rightPid::UsePIDOutput(double output)
{
	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);
	rightTalon->PIDWrite(output);
}

void rightPid::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//setDefaultCommand(new MySpecialCommand());
}
void rightPid::rightMotor(double power){
Enable();
SetSetpoint(power);
rightEncoder->Reset();
}
