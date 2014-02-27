#include "stdafx.h"
#include "RunRealTime.h"
#include "EmbeddedSystemXState.h"

RunRealTime::RunRealTime()
{
}


RunRealTime::~RunRealTime()
{
}

void RunRealTime::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
{
	state->RunRealTime(sys);
}