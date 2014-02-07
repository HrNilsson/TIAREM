#include "stdafx.h"
#include "Mode2.h"
#include "PowerOnSelfTest.h"
#include "Mode3.h"

Mode2* Mode2::_instance = 0;

Mode2* Mode2::Instance(void)
{
	if (_instance == 0)
	{
		_instance = new Mode2;
	}
	return _instance;
}

Mode2::Mode2(void)
{
}


Mode2::~Mode2(void)
{
}


void Mode2::chMode(EmbeddedSystemX* sys)
{
	ChangeState(sys, Mode3::Instance());
}


void Mode2::eventX(EmbeddedSystemX* sys)
{
}


void Mode2::eventY(EmbeddedSystemX* sys)
{
}


void Mode2::Restart(EmbeddedSystemX* sys)
{
	ChangeState(sys, PowerOnSelfTest::Instance());
}
