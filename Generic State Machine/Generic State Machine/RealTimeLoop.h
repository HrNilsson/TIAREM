#pragma once
#include "operational.h"
class RealTimeLoop :
	public Operational
{
public:
	RealTimeLoop(void);
	~RealTimeLoop(void);
	void Suspend(EmbeddedSystemX* sys) override;
	void Stop(EmbeddedSystemX* sys) override;
};

