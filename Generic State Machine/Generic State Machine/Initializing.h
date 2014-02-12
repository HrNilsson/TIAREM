#pragma once
#include "embeddedsystemxstate.h"
class Initializing :
	public EmbeddedSystemXState
{
public:
	static Initializing* Instance();
	~Initializing(void);
	void Initialized(EmbeddedSystemX* sys) override;
	void entry(EmbeddedSystemX* sys) override;
private:
	static Initializing* _instance;
protected:
	Initializing(void);
};

