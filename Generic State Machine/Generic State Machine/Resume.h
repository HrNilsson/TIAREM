#pragma once
#include "Command.h"
class Resume :
	public Command
{
public:
	Resume();
	~Resume();
	void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
};

