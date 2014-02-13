#pragma once
#include "Command.h"
class Stop :
	public Command
{
public:
	Stop();
	~Stop();
	void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
};

