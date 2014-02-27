#include "stdafx.h"
#include "SimulateRealTimeModeState.h"


SimulateRealTimeModeState::SimulateRealTimeModeState()
{
}


SimulateRealTimeModeState::~SimulateRealTimeModeState()
{
}

void SimulateRealTimeModeState::entry(EmbeddedSystemX* sys)
{

}

void SimulateRealTimeModeState::RunRealTime(EmbeddedSystemX* sys)
{

}

void SimulateRealTimeModeState::Simulate(EmbeddedSystemX* sys)
{

}

void SimulateRealTimeModeState::ChangeState(EmbeddedSystemX* sys, SimulateRealTimeModeState* pS)
{
	sys->ChangeState(pS);
}