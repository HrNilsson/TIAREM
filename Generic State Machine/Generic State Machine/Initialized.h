#pragma once
#include "Command.h"
class Initialized :
	public Command
{
public:
	Initialized();
	~Initialized();
	void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
};

