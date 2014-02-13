#include "stdafx.h"
#include "Restart.h"
#include "EmbeddedSystemXState.h"

Restart::Restart()
{
}


Restart::~Restart()
{
}


void Restart::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
{
	state->Restart(sys);
}