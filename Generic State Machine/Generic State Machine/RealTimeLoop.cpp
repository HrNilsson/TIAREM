#include "stdafx.h"
#include "RealTimeLoop.h"
#include "Ready.h"
#include "Suspended.h"


RealTimeLoop::RealTimeLoop(void)
{
}


RealTimeLoop::~RealTimeLoop(void)
{
}

void RealTimeLoop::Suspend(EmbeddedSystemX* sys)
{
	ChangeState(sys, Suspended::Instance());
}

void RealTimeLoop::Stop(EmbeddedSystemX* sys)
{
	ChangeState(sys, Ready::Instance());
}
