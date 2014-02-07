#pragma once
#include "realtimeloop.h"
class Mode3 :
	public RealTimeLoop
{
public:
	Mode3(void);
	~Mode3(void);
	void Restart() override;
	void chMode() override;
	void eventX() override;
};

