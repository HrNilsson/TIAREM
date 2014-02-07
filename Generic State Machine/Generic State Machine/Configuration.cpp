#include "stdafx.h"
#include "Configuration.h"

Configuration* Configuration::_instance = 0;

Configuration* Configuration::Instance(void)
{
	if (_instance == 0)
	{
		_instance = new Configuration;
	}
	return _instance;
}

Configuration::Configuration(void)
{
}


Configuration::~Configuration(void)
{
}


void Configuration::ConfigurationEnded()
{
}


void Configuration::readConfigurationInfo()
{
}


void Configuration::ConfigX()
{
}


void Configuration::Restart()
{
}
