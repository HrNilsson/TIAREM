#include "stdafx.h"
#include "Ready.h"
#include "PowerOnSelfTest.h"
#include "Mode1.h"
#include "Configuration.h"

Ready* Ready::_instance = 0;

Ready* Ready::Instance(void)
{
	if (_instance == 0)
	{
		_instance = new Ready;
	}
	return _instance;
}

Ready::Ready(void)
{
}


Ready::~Ready(void)
{
}


void Ready::Restart(EmbeddedSystemX* sys)
{
	ChangeState(sys, PowerOnSelfTest::Instance());
}


void Ready::Configure(EmbeddedSystemX* sys)
{
	ChangeState(sys, Configuration::Instance());
}


void Ready::Start(EmbeddedSystemX* sys)
{
	ChangeState(sys, Mode1::Instance());
}
