#pragma once
#include "Command.h"
class Start :
	public Command
{
public:
	Start();
	~Start();
	void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
};

