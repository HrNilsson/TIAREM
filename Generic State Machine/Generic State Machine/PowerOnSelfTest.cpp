#include "stdafx.h"
#include "PowerOnSelfTest.h"
#include <iostream>



PowerOnSelfTest::PowerOnSelfTest(void)
{
}


PowerOnSelfTest::~PowerOnSelfTest(void)
{
}


void SelfTestOk(void)
{
	cout << "Self Test Ok" << endl;
}


void SelfTestFailed(void)
{
	cout << "Self Test Failed" << endl;
}

void PowerOnSelfTest::SystemSelfTest(void)
{
	cout << "System Self Test" << endl;
}
