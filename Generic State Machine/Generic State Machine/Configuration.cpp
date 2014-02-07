#include "stdafx.h"
#include "Configuration.h"
#include "Ready.h"
#include "PowerOnSelfTest.h"

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


void Configuration::ConfigurationEnded(EmbeddedSystemX* sys)
{
	ChangeState(sys, Ready::Instance());
}


void Configuration::readConfigurationInfo()
{
}


void Configuration::ConfigX(EmbeddedSystemX* sys)
{
}


void Configuration::Restart(EmbeddedSystemX* sys)
{
	ChangeState(sys, PowerOnSelfTest::Instance());
}


void Configuration::entry()
{
	readConfigurationInfo();
}
