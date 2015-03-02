#include "ForkRight.h"
#include "../RobotMap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"

ForkRight::ForkRight() :
		PIDSubsystem("ForkRight", 1.0, 0.0, 0.0)
{
	// Use these to get going:
	// SetSetpoint() -  Sets where the PID controller should move the system
	//                  to
	// Enable() - Enables the PID controller.
	encoderRight = new Encoder(7, 8, true, Encoder::k1X);
		    encoderRight->Reset();
			encoderRight->SetPIDSourceParameter(kDistance);




			encoderRight->SetDistancePerPulse(1.0/360.0);
			speedcontrollerRight = new Jaguar(JAGRIGHT);


			GetPIDController()->SetContinuous(false);
		    GetPIDController()->SetAbsoluteTolerance(.2);
			SetOutputRange(-0.25, 0.8);
			SetSetpoint(BOT);
}

double ForkRight::ReturnPIDInput()
{
	// Return your input value for the PID loop
	// e.g. a sensor, like a potentiometer:
	// yourPot->SetAverageVoltage() / kYourMaxVoltage;	
	return encoderRight->PIDGet();
}

void ForkRight::UsePIDOutput(double output)
{
	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);
	speedcontrollerRight->PIDWrite(output);
}

void ForkRight::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//setDefaultCommand(new MySpecialCommand());
}
void ForkRight::SetRightFork(double rightFork){
	Enable();
		float currentVal = GetSetpoint();
		float newVal = rightFork + currentVal;
		printf("currentVal: %f, newVal: %f, %f <= %f <= %f height:%f\n", currentVal, newVal, END, newVal, TOP, rightFork);
		if(END <= newVal && newVal <= TOP){
			printf("SetSetpoint %f\n", newVal);
			SetSetpoint(newVal);
		}
}
