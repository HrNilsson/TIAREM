#include "stdafx.h"
#include "eventY.h"
#include "EmbeddedSystemXState.h"

eventY::eventY()
{
}


eventY::~eventY()
{
}


void eventY::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
{
	state->eventY(sys);
}