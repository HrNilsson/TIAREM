#include "stdafx.h"
#include "Mode1.h"
#include "PowerOnSelfTest.h"
#include "Mode2.h"

Mode1* Mode1::_instance = 0;

Mode1* Mode1::Instance(void)
{
	if (_instance == 0)
	{
		_instance = new Mode1;
	}
	return _instance;
}

Mode1::Mode1(void)
{
}


Mode1::~Mode1(void)
{
}


void Mode1::chMode(EmbeddedSystemX* sys)
{
	ChangeState(sys, Mode2::Instance());
}


void Mode1::eventX(EmbeddedSystemX* sys)
{
}


void Mode1::Restart(EmbeddedSystemX* sys)
{
	ChangeState(sys, PowerOnSelfTest::Instance());
}
