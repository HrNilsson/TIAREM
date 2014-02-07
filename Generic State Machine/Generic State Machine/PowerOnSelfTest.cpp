#include "stdafx.h"
#include "PowerOnSelfTest.h"
#include <iostream>

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

void SelfTestFailed(int ErrorNo)
{
}

void PowerOnSelfTest::systemSelfTest(void)
{
}


void PowerOnSelfTest::SelfTestOk()
{
}


void PowerOnSelfTest::SelfTestFailed()
{
}
