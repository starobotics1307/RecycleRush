#include "OI.h"
#include "RobotMap.h"
#include "Commands/Lift.h"
#include "Commands/LiftReverse.h"
#include "Commands/Kill.h"
#include "Commands/ToClamp.h"
#include "Commands/ToNarrow.h"
#include "Commands/ToWide.h"

OI::OI()
{
	// Process operator interface input here.
	lstick = new Joystick(LSTICK);
	rstick = new Joystick(RSTICK);

    lbutton_a = new JoystickButton(lstick, LBUTTONA);
    rbutton_a = new JoystickButton(rstick, RBUTTONA);
    rbutton_b = new JoystickButton(rstick, 2);
    clampButton = new JoystickButton(lstick, 3);
    narrowButton = new JoystickButton(lstick, 4);
    wideButton =  new JoystickButton(lstick, 2);


    rbutton_a->WhenPressed(new LiftReverse());


    lbutton_a->WhenPressed(new Lift());

    clampButton->WhenPressed(new ToClamp());
    narrowButton->WhenPressed(new ToNarrow());
    wideButton->WhenPressed(new ToWide());


}

Joystick* OI::getlstick(){
	return lstick;
}

Joystick* OI::getrstick(){

return rstick;
}

Button* OI::getlbutton_a(){

	return lbutton_a;
}

Button* OI::getrbutton_a(){

	return rbutton_a;
}

Button* OI::getrbutton_b(){

	return rbutton_b;
}
