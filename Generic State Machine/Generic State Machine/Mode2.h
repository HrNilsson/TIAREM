#pragma once
#include "realtimeloop.h"
class Mode2 :
	public RealTimeLoop
{
public:
	Mode2(void);
	~Mode2(void);
	void chMode() override;
	void eventX() override;
	void eventY() override;
	void Restart() override;
};

