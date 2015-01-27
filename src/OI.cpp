#include "OI.h"
#include "RobotMap.h"

OI::OI()
{
	// Process operator interface input here.
	lstick = new Joystick(LEFT_JOYSTICK);
	rstick = new Joystick(RIGHT_JOYSTICK);
}

Joystick* OI::GetLeftJoystick() {
	return lstick;
}

Joystick* OI::GetRightJoystick() {
	return rstick;
}
