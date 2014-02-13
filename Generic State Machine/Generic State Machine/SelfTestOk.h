#pragma once
#include "Command.h"
class SelfTestOk :
	public Command
{
public:
	SelfTestOk();
	~SelfTestOk();
	void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
};

