#include "DriveTrain.h"
#include "WPILib.h"
#include "../RobotMap.h"
#include "../Commands/Drive.h"
#include "../Commands/AutoMove.h"

DriveTrain::DriveTrain() :
		Subsystem("DriveTrain")
{
robotDrive = new RobotDrive(f_R_TAL, b_R_TAL, f_L_TAL, b_L_TAL);
robotDrive->SetSensitivity(1.0);
robotDrive->SetMaxOutput(0.65);


leftEncoder = new Encoder(4,5, true, Encoder::k1X);
rightEncoder = new Encoder(2,3, true, Encoder::k1X);

//leftEncoder->Reset();

leftEncoder->SetPIDSourceParameter(Encoder::kDistance);
leftEncoder->SetDistancePerPulse(26.5/360.0);

//rightEncoder->Reset();

rightEncoder->SetPIDSourceParameter(Encoder::kDistance);
rightEncoder->SetDistancePerPulse(26.5/360.0);


leftTalon = new Talon(LEFT);
rightTalon = new Talon(RIGHT);



}

void DriveTrain::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new Drive());

}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void DriveTrain::TankDrive(Joystick* rstick, Joystick* lstick){

	robotDrive->TankDrive(rstick, lstick);



}
void DriveTrain::AutoDrive(float left, float right){
//leftPid->Reset();
//rightPid->Reset();

	robotDrive->TankDrive(left, right);



}


