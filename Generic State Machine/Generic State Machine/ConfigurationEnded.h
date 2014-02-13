#pragma once
#include "Command.h"
class ConfigurationEnded :
	public Command
{
public:
	ConfigurationEnded();
	~ConfigurationEnded();
	void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
};

