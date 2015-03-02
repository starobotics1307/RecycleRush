#include "CommandBase.h"
#include "Commands/Scheduler.h"

// Initialize a single static instance of all of your subsystems to NULL
DriveTrain* CommandBase::driveTrain = NULL;
DriveLift* CommandBase::driveLift = NULL;
ForkLeft* CommandBase::leftFork = NULL;
ForkRight* CommandBase::rightFork = NULL;
OI* CommandBase::oi = NULL;
Claw* CommandBase::claw = NULL;
rightPid* CommandBase::rPid = NULL;
leftPid* CommandBase::lPid = NULL;




CommandBase::CommandBase(char const *name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	// Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	driveTrain = new DriveTrain();
    driveLift = new DriveLift();
    leftFork = new ForkLeft();
    rightFork = new ForkRight();
	oi = new OI();
	claw = new Claw();
    rPid = new rightPid();
    lPid = new leftPid();



}
