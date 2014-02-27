#pragma once
#include "SimulateRealTimeModeState.h"

class Simulation :
	public SimulateRealTimeModeState
{
public:
	static Simulation* Instance(void);
	~Simulation();
	void RunRealTime(EmbeddedSystemX* sys) override;
	void entry(EmbeddedSystemX* sys) override;
private:
	static Simulation* _instance;
protected:
	Simulation(void);
};

