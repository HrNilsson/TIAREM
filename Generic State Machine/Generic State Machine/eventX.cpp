#include "stdafx.h"
#include "eventX.h"
#include "EmbeddedSystemXState.h"

eventX::eventX()
{
}


eventX::~eventX()
{
}


void eventX::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
{
	state->eventX(sys);
}