#pragma once
#include "Command.h"
class Configure :
	public Command
{
public:
	Configure();
	~Configure();
	void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
};

