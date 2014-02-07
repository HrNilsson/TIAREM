#include "stdafx.h"
#include "Failure.h"

Failure* Failure::_instance = 0;

Failure* Failure::Instance(void)
{
	if (_instance == 0)
	{
		_instance = new Failure;
	}
	return _instance;
}

Failure::Failure(void)
{
}


Failure::~Failure(void)
{
}


void Failure::Exit()
{
}


void Failure::Restart()
{
}


void Failure::display()
{
}
