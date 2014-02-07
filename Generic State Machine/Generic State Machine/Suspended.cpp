#include "stdafx.h"
#include "Suspended.h"
#include "PowerOnSelfTest.h"
#include "Ready.h"
#include "Mode1.h"

Suspended* Suspended::_instance = 0;

Suspended* Suspended::Instance(void)
{
	if (_instance == 0)
	{
		_instance = new Suspended;
	}
	return _instance;
}

Suspended::Suspended(void)
{
}


Suspended::~Suspended(void)
{
}


void Suspended::Restart(EmbeddedSystemX* sys)
{
	ChangeState(sys, PowerOnSelfTest::Instance());
}


void Suspended::Resume(EmbeddedSystemX* sys)
{
	ChangeState(sys, Mode1::Instance());
}


void Suspended::Stop(EmbeddedSystemX* sys)
{
	ChangeState(sys, Ready::Instance());
}
