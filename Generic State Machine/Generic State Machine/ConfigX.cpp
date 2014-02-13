#include "stdafx.h"
#include "ConfigX.h"
#include "EmbeddedSystemXState.h"

ConfigX::ConfigX()
{
}


ConfigX::~ConfigX()
{
}


void ConfigX::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
{
	state->ConfigX(sys);
}