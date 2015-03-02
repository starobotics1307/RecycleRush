#include "AutoCommandSystem.h"
#include "Commands/ToWide.h"
#include "Commands/ToNarrow.h"
#include "Commands/ToClamp.h"
#include "Commands/AutoLift.h"
#include "Commands/AutoLiftReverse.h"
#include "Commands/AutoMove.h"
#include "Commands/Autoturn.h"
AutoCommandSystem::AutoCommandSystem()
{
	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.

	//Move Forward 4.0
	AddSequential(new AutoMove(4.0));

	//Move Turn 90.0
	AddSequential(new AutoTurn(180.0));

	AddSequential(new AutoMove(-4.0));
}
