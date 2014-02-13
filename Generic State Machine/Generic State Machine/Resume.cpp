#include "stdafx.h"
#include "Resume.h"
#include "EmbeddedSystemXState.h"

Resume::Resume()
{
}


Resume::~Resume()
{
}


void Resume::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
{
	state->Resume(sys);
}