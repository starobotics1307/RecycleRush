#ifndef ROBOTMAP_H
#define ROBOTMAP_H

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
//const int LEFTMOTOR = 1;
//const int RIGHTMOTOR = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
//const int RANGE_FINDER_PORT = 1;
//const int RANGE_FINDER_MODULE = 1;
const int f_R_TAL = 0;
const int b_R_TAL = 1;
const int f_L_TAL = 2;
const int b_L_TAL = 3;

const int r = 0;
const int l = 1;

const int RSTICK = 0;
const int LSTICK = 1;

const int RBUTTONA = 1;
const int LBUTTONA = 1;

//#AUTONOMOUS
const static double FORWARD = 10.00;
const int RIGHT = 0;
const int LEFT = 2;

const int JAGLIFT = 4;
const int JAGLIFT_TWO = 5;
const static double TOP = 20.0;
const static double DELTA = TOP/4;
const static double AUTODELTA =(TOP/4)*2;
const static double BOT = 0;
const static double END = -5;

//-4.3125
const int SOL_IN_CHANNEL_FOREWARD = 0;
const int SOL_IN_CHANNEL_REVERSE = 1;
const int SOL_OUT_CHANNEL_FOREWARD  = 2;
const int SOL_OUT_CHANNEL_REVERSE = 3;

const int SOL_CAN_ID = 0;

#endif
