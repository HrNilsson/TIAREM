#include "stdafx.h"
#include "SelfTestOk.h"
#include "EmbeddedSystemXState.h"

SelfTestOk::SelfTestOk()
{
}


SelfTestOk::~SelfTestOk()
{
}


void SelfTestOk::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
{
	state->SelfTestOk(sys);
}