#pragma once
#include "realtimeloop.h"
class Mode1 :
	public RealTimeLoop
{
public:
	Mode1(void);
	~Mode1(void);
	void chMode() override;
	void eventX() override;
	void Restart() override;
};

