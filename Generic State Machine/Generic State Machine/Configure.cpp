#include "stdafx.h"
#include "Configure.h"
#include "EmbeddedSystemXState.h"

Configure::Configure()
{
}


Configure::~Configure()
{
}


void Configure::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
{
	state->Configure(sys);
}