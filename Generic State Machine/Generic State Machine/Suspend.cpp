#include "stdafx.h"
#include "Suspend.h"
#include "EmbeddedSystemXState.h"

Suspend::Suspend()
{
}


Suspend::~Suspend()
{
}


void Suspend::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
{
	state->Suspend(sys);
}