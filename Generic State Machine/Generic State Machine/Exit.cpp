#include "stdafx.h"
#include "Exit.h"
#include "EmbeddedSystemXState.h"

Exit::Exit()
{
}


Exit::~Exit()
{
}


void Exit::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
{
	state->Exit(sys);
}