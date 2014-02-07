#pragma once
#include "operational.h"
class Configuration :
	public Operational
{
public:
	Configuration(void);
	~Configuration(void);
	void ConfigurationEnded(void) override;
private:
	void readConfigurationInfo(void);
public:
	void ConfigX(void);
	void Restart(void);
};

