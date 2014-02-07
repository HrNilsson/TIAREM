#include "stdafx.h"
#include "EmbeddedSystemXState.h"


EmbeddedSystemXState::EmbeddedSystemXState(void)
{
}


EmbeddedSystemXState::~EmbeddedSystemXState(void)
{
}

void EmbeddedSystemXState::Initialized(EmbeddedSystemX* sys)
{
	defaultBehavior();
}

void EmbeddedSystemXState::Restart(EmbeddedSystemX* sys)
{
	defaultBehavior();
}

void EmbeddedSystemXState::Configure(EmbeddedSystemX* sys)
{
	defaultBehavior();
}

void EmbeddedSystemXState::ConfigurationEnded(EmbeddedSystemX* sys)
{
	defaultBehavior();
}

void EmbeddedSystemXState::Exit(EmbeddedSystemX* sys)
{
	defaultBehavior();
}

void EmbeddedSystemXState::Stop(EmbeddedSystemX* sys)
{
	defaultBehavior();
}

void EmbeddedSystemXState::Start(EmbeddedSystemX* sys)
{
	defaultBehavior();
}

void EmbeddedSystemXState::Suspend(EmbeddedSystemX* sys)
{
	defaultBehavior();
}

void EmbeddedSystemXState::Resume(EmbeddedSystemX* sys)
{
	defaultBehavior();
}

void EmbeddedSystemXState::ConfigX(EmbeddedSystemX* sys)
{
	defaultBehavior();
}

void EmbeddedSystemXState::chMode(EmbeddedSystemX* sys)
{
	defaultBehavior();
}

void EmbeddedSystemXState::eventX(EmbeddedSystemX* sys)
{
	defaultBehavior();
}

void EmbeddedSystemXState::eventY(EmbeddedSystemX* sys)
{
	defaultBehavior();
}

void EmbeddedSystemXState::SelfTestOk(EmbeddedSystemX* sys)
{
	defaultBehavior();
}

void EmbeddedSystemXState::SelfTestFailed(EmbeddedSystemX* sys)
{
	defaultBehavior();
}

void EmbeddedSystemXState::entry()
{
	defaultBehavior();
}

void EmbeddedSystemXState::ChangeState(EmbeddedSystemX* sys, EmbeddedSystemXState* pS)
{
	sys->ChangeState(pS);
}

void EmbeddedSystemXState::defaultBehavior()
{
	// write to the console?
}
