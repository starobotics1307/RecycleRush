#include "ForkLeft.h"
#include "../RobotMap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"

ForkLeft::ForkLeft() :
		PIDSubsystem("ForkLeft", 1.0, 0.0, 0.0)
{
	// Use these to get going:
	// SetSetpoint() -  Sets where the PID controller should move the system
	//                  to
	// Enable() - Enables the PID controller.
	encoderLeft = new Encoder(3, 4, true, Encoder::k1X);
	    encoderLeft->Reset();
		encoderLeft->SetPIDSourceParameter(kDistance);




		encoderLeft->SetDistancePerPulse(1.0/360.0);
		speedcontrollerLeft = new Jaguar(JAGLEFT);


		GetPIDController()->SetContinuous(false);
	    GetPIDController()->SetAbsoluteTolerance(.2);
		SetOutputRange(-0.25, 0.8);
		SetSetpoint(BOT);
}

double ForkLeft::ReturnPIDInput()
{
	// Return your input value for the PID loop
	// e.g. a sensor, like a potentiometer:
	// yourPot->SetAverageVoltage() / kYourMaxVoltage;	
	return encoderLeft->PIDGet();
}

void ForkLeft::UsePIDOutput(double output)
{
	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);
	speedcontrollerLeft->PIDWrite(output);
}

void ForkLeft::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//setDefaultCommand(new MySpecialCommand());
}
void ForkLeft::SetLeftFork(double leftFork){
	Enable();
		float currentVal = GetSetpoint();
		float newVal = leftFork + currentVal;
		printf("currentVal: %f, newVal: %f, %f <= %f <= %f height:%f\n", currentVal, newVal, END, newVal, TOP, leftFork);
		if(END <= newVal && newVal <= TOP){
			printf("SetSetpoint %f\n", newVal);
			SetSetpoint(newVal);

}
}
