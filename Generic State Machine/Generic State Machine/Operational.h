#pragma once
#include "embeddedsystemxstate.h"
class Operational :
	public EmbeddedSystemXState
{
public:
	Operational(void);
	~Operational(void);
	void Restart() override;
};

