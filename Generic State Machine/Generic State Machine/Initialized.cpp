#include "stdafx.h"
#include "Initialized.h"
#include "EmbeddedSystemXState.h"

Initialized::Initialized()
{
}


Initialized::~Initialized()
{
}


void Initialized::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
{
	state->Initialized(sys);
}