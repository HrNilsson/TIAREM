#pragma once
#include "embeddedsystemxstate.h"
class Failure :
	public EmbeddedSystemXState
{
public:
	Failure(void);
	~Failure(void);
};

