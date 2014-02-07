#pragma once
#include "operational.h"
class RealTimeLoop :
	public Operational
{
public:
	RealTimeLoop(void);
	~RealTimeLoop(void);
	void Restart() override;
	void Suspend() override;
	void Stop() override;
};

