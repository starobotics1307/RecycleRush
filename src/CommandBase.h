#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include <string>
#include "Commands/Command.h"
#include "Subsystems/DriveTrain.h"
#include "Subsystems/DriveLift.h"
#include "Subsystems/Claw.h"
#include "Subsystems/leftPid.h"
#include "Subsystems/rightPid.h"


#include "OI.h"
#include "WPILib.h"

/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command
{
public:
	CommandBase(char const *name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	static DriveTrain *driveTrain;
	static DriveLift *driveLift;
	static OI *oi;
	static Claw* claw;
    static leftPid* lPid;
    static rightPid* rPid;



};

#endif
