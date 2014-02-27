#pragma once
#include "Command.h"
class RunRealTime :
	public Command
{
public:
	RunRealTime();
	~RunRealTime();
	void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
};

