#pragma once
#include "Command.h"
class eventY :
	public Command
{
public:
	eventY();
	~eventY();
	void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
};

