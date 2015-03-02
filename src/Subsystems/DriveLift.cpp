#include "DriveLift.h"
#include "../RobotMap.h"
#include "../Commands/Lift.h"
#include "../Commands/LiftReverse.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"
#include "OI.h"

DriveLift::DriveLift() :
PIDSubsystem("DriveLift", 1.0, 0.0 , 0.0, 0.0) {


	encoder = new Encoder(0, 1, true, Encoder::k1X);
    encoder->Reset();
	encoder->SetPIDSourceParameter(kDistance);




	encoder->SetDistancePerPulse(1.0/360.0);
	speedcontroller = new Jaguar(JAGLIFT);
	speedcontrollertwo = new Jaguar(JAGLIFT_TWO);

	GetPIDController()->SetContinuous(false);
    GetPIDController()->SetAbsoluteTolerance(.2);
	SetOutputRange(-0.25, 0.8);
	SetSetpoint(BOT);
	//Enable();

}

double DriveLift::ReturnPIDInput() {

	printf("EncoderPIDGet:%f\n", encoder->PIDGet());

   return encoder->PIDGet();
}

void DriveLift::UsePIDOutput(double output) {
	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);

	//printf("OutputPID:%f\n", output);

	speedcontrollertwo->Set(output);
	speedcontroller->PIDWrite(output);

}

void DriveLift::InitDefaultCommand() {

}

void DriveLift::SetHeight(double height) {

//GetPIDController()->Reset();
//encoder->Reset();
Enable();
	float currentVal = GetSetpoint();
	float newVal = height +currentVal;
	printf("currentVal: %f, newVal: %f, %f <= %f <= %f height:%f\n", currentVal, newVal, END, newVal, TOP, height);
	if(END <= newVal && newVal <= TOP){
		printf("SetSetpoint %f\n", newVal);
		SetSetpoint(newVal);

	}

}

