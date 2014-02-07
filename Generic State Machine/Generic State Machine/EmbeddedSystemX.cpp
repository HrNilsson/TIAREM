#include "stdafx.h"
#include "EmbeddedSystemX.h"


EmbeddedSystemX::EmbeddedSystemX(void)
{
	_state = PowerOnSelfTest
}


EmbeddedSystemX::~EmbeddedSystemX(void)
{
}

void EmbeddedSystemX::SelftestOk(void)
{
}

void EmbeddedSystemX::Initialized(void)
{
}

void EmbeddedSystemX::Restart(void)
{
}

void EmbeddedSystemX::Configure(void)
{
}

void EmbeddedSystemX::ConfigurationEnded(void)
{
}

void EmbeddedSystemX::Exit(void)
{
}

void EmbeddedSystemX::Stop(void)
{
}

void EmbeddedSystemX::Start(void)
{
}

void EmbeddedSystemX::Supend(void)
{
}

void EmbeddedSystemX::Resume(void)
{
}

void EmbeddedSystemX::SelfTestFailed(int ErrorNo)
{
}

void EmbeddedSystemX::ConfigX(void)
{
}

void EmbeddedSystemX::chMode(void)
{
}

void EmbeddedSystemX::eventX(void)
{
}

void EmbeddedSystemX::eventY(void)
{
}


void ChangeState(EmbeddedSystemXState*)
{
}
