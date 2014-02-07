#include "stdafx.h"
#include "Mode1.h"

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


void Mode1::chMode()
{
}


void Mode1::eventX()
{
}


void Mode1::Restart()
{
}
