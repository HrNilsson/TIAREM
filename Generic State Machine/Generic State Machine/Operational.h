#pragma once
#include "embeddedsystemxstate.h"
class Operational :
	public EmbeddedSystemXState
{
public:
	virtual ~Operational(void);
	void Restart(EmbeddedSystemX* sys) override;
protected:
	Operational(void);
};

