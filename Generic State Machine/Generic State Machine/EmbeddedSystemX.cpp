#include "stdafx.h"
#include "EmbeddedSystemX.h"
#include "PowerOnSelfTest.h"

EmbeddedSystemXState* _state;

EmbeddedSystemX::EmbeddedSystemX(void)
{
	_state = PowerOnSelfTest::Instance();
	_state->entry();
}


EmbeddedSystemX::~EmbeddedSystemX(void)
{
}

void EmbeddedSystemX::SelfTestOk(void)
{
	_state->SelfTestOk(this);
}

void EmbeddedSystemX::Initialized(void)
{
	_state->Initialized(this);
}

void EmbeddedSystemX::Restart(void)
{
	_state->Restart(this);
}

void EmbeddedSystemX::Configure(void)
{
	_state->Configure(this);
}

void EmbeddedSystemX::ConfigurationEnded(void)
{
	_state->ConfigurationEnded(this);
}

void EmbeddedSystemX::Exit(void)
{
	_state->Exit(this);
}

void EmbeddedSystemX::Stop(void)
{
	_state->Stop(this);
}

void EmbeddedSystemX::Start(void)
{
	_state->Start(this);
}

void EmbeddedSystemX::Supend(void)
{
	_state->Suspend(this);
}

void EmbeddedSystemX::Resume(void)
{
	_state->Resume(this);
}

void EmbeddedSystemX::SelfTestFailed(int ErrorNo)
{
	_state->SelfTestFailed(this);
}

void EmbeddedSystemX::ConfigX(void)
{
	_state->ConfigX(this);
}

void EmbeddedSystemX::chMode(void)
{
	_state->chMode(this);
}

void EmbeddedSystemX::eventX(void)
{
	_state->eventX(this);
}

void EmbeddedSystemX::eventY(void)
{
	_state->eventY(this);
}


void EmbeddedSystemX::ChangeState(EmbeddedSystemXState* pS)
{
	_state = pS;
	_state->entry();
}
