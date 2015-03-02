#include "Claw.h"
#include "../RobotMap.h"

Claw::Claw() :
		Subsystem("Claw")
{
	solenoidIn = new DoubleSolenoid(SOL_CAN_ID, SOL_IN_CHANNEL_FOREWARD, SOL_IN_CHANNEL_REVERSE);
	solenoidOut = new DoubleSolenoid(SOL_CAN_ID, SOL_OUT_CHANNEL_FOREWARD, SOL_OUT_CHANNEL_REVERSE);
	comp = new Compressor();
}

void Claw::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

//positions
void Claw::Clamp(){
	solenoidIn -> Set(DoubleSolenoid::Value::kReverse);
	solenoidOut -> Set(DoubleSolenoid::Value::kReverse);
}
void Claw::Narrow(){
	solenoidIn -> Set(DoubleSolenoid::Value::kForward);
	solenoidOut -> Set(DoubleSolenoid::Value::kReverse);
}
void Claw::Wide(){
	solenoidIn -> Set(DoubleSolenoid::Value::kForward);
	solenoidOut -> Set(DoubleSolenoid::Value::kForward);
}

//compressor
void Claw::Compress(){
	comp -> SetClosedLoopControl(true);
}
