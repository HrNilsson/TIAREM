#include "stdafx.h"
#include "Mode2.h"

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


void Mode2::chMode()
{
}


void Mode2::eventX()
{
}


void Mode2::eventY()
{
}


void Mode2::Restart()
{
}
