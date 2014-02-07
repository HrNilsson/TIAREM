#include "stdafx.h"
#include "Ready.h"

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


void Ready::Restart()
{
}


void Ready::Configure()
{
}


void Ready::Start()
{
}
