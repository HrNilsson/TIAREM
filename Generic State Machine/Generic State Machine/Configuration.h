#pragma once
#include "operational.h"
class Configuration :
	public Operational
{
public:
	static Configuration* Instance();
	~Configuration(void);
	void ConfigurationEnded(EmbeddedSystemX* sys) override;
	void ConfigX(EmbeddedSystemX* sys) override;
	void entry() override;
private:
	static Configuration* _instance;
	void readConfigurationInfo(void);
protected:
	Configuration(void);
};

