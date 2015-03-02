#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
Joystick *lstick;
Joystick *rstick;
Button *lbutton_a;
Button *rbutton_a;
Button *rbutton_b;
public:

	OI();
	Joystick* getlstick();
	Joystick* getrstick();

	Button* getlbutton_a();
	Button* getrbutton_b();
	Button* getrbutton_a();

	Button* clampButton;
	Button* narrowButton;
	Button* wideButton;

};

#endif
