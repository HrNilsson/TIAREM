#include "stdafx.h"
#include "Mode3.h"

Mode3* Mode3::_instance = 0;

Mode3* Mode3::Instance(void)
{
	if (_instance == 0)
	{
		_instance = new Mode3;
	}
	return _instance;
}

Mode3::Mode3(void)
{
}


Mode3::~Mode3(void)
{
}


void Mode3::Restart()
{
}


void Mode3::chMode()
{
}


void Mode3::eventX()
{
}
