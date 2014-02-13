#pragma once
#include "Command.h"
class eventX :
	public Command
{
public:
	eventX();
	~eventX();
	void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
};

