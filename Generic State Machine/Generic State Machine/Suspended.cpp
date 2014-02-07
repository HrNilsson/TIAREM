#include "stdafx.h"
#include "Suspended.h"

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


void Suspended::Restart()
{
}


void Suspended::Resume()
{
}


void Suspended::Stop()
{
}
