#include "stdafx.h"
#include "Simulation.h"
#include "RealTimeExecution.h"

Simulation* Simulation::_instance = 0;

Simulation* Simulation::Instance(void)
{
	if (_instance == 0)
	{
		_instance = new Simulation();
	}
	return _instance;
}

Simulation::Simulation()
{
}


Simulation::~Simulation()
{
}


void Simulation::RunRealTime(EmbeddedSystemX* sys)
{
	ChangeState(sys, RealTimeExecution::Instance());
}


void Simulation::entry(EmbeddedSystemX* sys)
{
	sys->display("Simulation state entered.");
}
