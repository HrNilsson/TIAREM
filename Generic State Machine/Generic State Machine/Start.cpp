#include "stdafx.h"
#include "Start.h"
#include "EmbeddedSystemXState.h"

Start::Start()
{
}


Start::~Start()
{
}


void Start::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
{
	state->Start(sys);
}