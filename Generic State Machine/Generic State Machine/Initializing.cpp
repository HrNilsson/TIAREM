#include "stdafx.h"
#include "Initializing.h"

Initializing* Initializing::_instance = 0;

Initializing* Initializing::Instance(void)
{
	if (_instance == 0)
	{
		_instance = new Initializing;
	}
	return _instance;
}

Initializing::Initializing(void)
{
}


Initializing::~Initializing(void)
{
}


void Initializing::Initialized()
{
}


void Initializing::startInitializing()
{
}
