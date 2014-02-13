#pragma once
#include "Command.h"
class chMode :
	public Command
{
public:
	chMode();
	~chMode();
	void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
};

