#include "stdafx.h"
#include "PowerOnSelfTest.h"
#include <iostream>
#include "Failure.h"
#include "Initializing.h"


PowerOnSelfTest* PowerOnSelfTest::_instance = 0;

PowerOnSelfTest* PowerOnSelfTest::Instance(void)
{
	if (_instance == 0)
	{
		_instance = new PowerOnSelfTest;
	}
	return _instance;
}

PowerOnSelfTest::PowerOnSelfTest(void)
{
}


PowerOnSelfTest::~PowerOnSelfTest(void)
{
}

void PowerOnSelfTest::systemSelfTest(void)
{
}


void PowerOnSelfTest::SelfTestOk(EmbeddedSystemX* sys)
{
	ChangeState(sys, Initializing::Instance());
}


void PowerOnSelfTest::SelfTestFailed(EmbeddedSystemX* sys)
{
	ChangeState(sys, Failure::Instance());
}


void PowerOnSelfTest::entry()
{
	systemSelfTest();
}
