#include "stdafx.h"
#include "SelfTestFailed.h"
#include "EmbeddedSystemXState.h"

SelfTestFailed::SelfTestFailed(int ErrorNo)
{
	this->ErrorNo = ErrorNo;
}


SelfTestFailed::~SelfTestFailed()
{
}


void SelfTestFailed::execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state)
{
	state->SelfTestFailed(sys, ErrorNo);
}