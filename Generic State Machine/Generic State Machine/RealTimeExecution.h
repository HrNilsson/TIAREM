#pragma once
#include "SimulateRealTimeModeState.h"

class RealTimeExecution :
	public SimulateRealTimeModeState
{
public:
	static RealTimeExecution* Instance(void);
	~RealTimeExecution(void);
	void Simulate(EmbeddedSystemX* sys);
	void entry(EmbeddedSystemX* sys);
private:
	static RealTimeExecution* _instance;
protected:
	RealTimeExecution(void);
};

