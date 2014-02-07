#pragma once
#include "embeddedsystemxstate.h"
class Failure :
	public EmbeddedSystemXState
{
public:
	static Failure* Instance();
	~Failure(void);
	void Exit(EmbeddedSystemX* sys) override;
	void Restart(EmbeddedSystemX* sys) override;
	void entry() override;
private:
	static Failure* _instance;
	void display();
protected:
	Failure(void);
};

