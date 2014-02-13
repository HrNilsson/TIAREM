#pragma once
#include "Command.h"
class ConfigX :
	public Command
{
public:
	ConfigX();
	~ConfigX();
	void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
};

