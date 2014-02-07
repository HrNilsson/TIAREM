#pragma once
#include "operational.h"
class Configuration :
	public Operational
{
public:
	static Configuration* Instance();
	~Configuration(void);
	void ConfigurationEnded(void) override;
	void ConfigX(void) override;
	void Restart(void) override;
private:
	static Configuration* _instance;
	void readConfigurationInfo(void);
protected:
	Configuration(void);
};

