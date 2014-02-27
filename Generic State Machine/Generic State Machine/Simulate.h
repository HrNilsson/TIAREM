#pragma once
#include "Command.h"
class Simulate :
	public Command
{
public:
	Simulate();
	~Simulate();
	void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
};

