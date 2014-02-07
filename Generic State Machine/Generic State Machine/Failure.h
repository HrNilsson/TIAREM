#pragma once
#include "embeddedsystemxstate.h"
class Failure :
	public EmbeddedSystemXState
{
public:
	Failure(void);
	~Failure(void);
	void Exit() override;
	void Restart() override;
private:
	void display();
};

