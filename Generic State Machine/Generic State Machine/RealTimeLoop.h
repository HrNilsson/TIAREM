#pragma once
#include "operational.h"
class RealTimeLoop :
	public Operational
{
public:
	virtual ~RealTimeLoop(void);
	void Suspend(EmbeddedSystemX* sys) override;
	void Stop(EmbeddedSystemX* sys) override;
protected:
	RealTimeLoop(void);
};

