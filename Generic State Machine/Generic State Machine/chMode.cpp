#include "stdafx.h"
#include "chMode.h"
#include "EmbeddedSystemXState.h"

chMode::chMode()
{
}


chMode::~chMode()
{
}

void chMode::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
{
	state->chMode(sys);
}