#include "stdafx.h"
#include "Simulate.h"
#include "EmbeddedSystemXState.h"

Simulate::Simulate()
{
}


Simulate::~Simulate()
{
}

void Simulate::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
{
	state->Simulate(sys);
}