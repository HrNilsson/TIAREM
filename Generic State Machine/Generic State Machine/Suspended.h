#pragma once
#include "operational.h"
class Suspended :
	public Operational
{
public:
	Suspended(void);
	~Suspended(void);
	void Restart() override;
	void Resume() override;
	void Stop() override;
};

