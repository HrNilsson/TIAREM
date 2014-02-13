#pragma once
#include "Command.h"
class SelfTestFailed :
	public Command
{
public:
	SelfTestFailed(int ErrorNo);
	~SelfTestFailed();
	void execute(EmbeddedSystemX* sys, EmbeddedSystemXState* state) override;
private:
	int ErrorNo;
};

