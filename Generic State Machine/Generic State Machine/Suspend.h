#pragma once
#include "Command.h"
class Suspend :
	public Command
{
public:
	Suspend();
	~Suspend();
	void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
};

