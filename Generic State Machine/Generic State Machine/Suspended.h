#pragma once
#include "operational.h"
class Suspended :
	public Operational
{
public:
	static Suspended* Instance();
	~Suspended(void);
	void Restart(EmbeddedSystemX* sys) override;
	void Resume(EmbeddedSystemX* sys) override;
	void Stop(EmbeddedSystemX* sys) override;
private:
	static Suspended* _instance;
protected:
	Suspended(void);
};

