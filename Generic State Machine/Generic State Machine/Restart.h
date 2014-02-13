#pragma once
#include "Command.h"
class Restart :
	public Command
{
public:
	Restart();
	~Restart();
	void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
};

