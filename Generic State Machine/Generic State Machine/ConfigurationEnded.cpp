#include "stdafx.h"
#include "ConfigurationEnded.h"
#include "EmbeddedSystemXState.h"


ConfigurationEnded::ConfigurationEnded()
{
}


ConfigurationEnded::~ConfigurationEnded()
{
}

void ConfigurationEnded::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
{
	state->ConfigurationEnded(sys);
}