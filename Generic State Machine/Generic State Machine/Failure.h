#pragma once
#include "embeddedsystemxstate.h"
class Failure :
	public EmbeddedSystemXState
{
public:
	static Failure* Instance();
	~Failure(void);
	void Exit() override;
	void Restart() override;
private:
	static Failure* _instance;
	void display();
protected:
	Failure(void);
};

