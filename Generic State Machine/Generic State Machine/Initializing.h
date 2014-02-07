#pragma once
#include "embeddedsystemxstate.h"
class Initializing :
	public EmbeddedSystemXState
{
public:
	static Initializing* Instance();
	~Initializing(void);
	void Initialized(EmbeddedSystemX* sys) override;
	void entry() override;
private:
	static Initializing* _instance;
	void startInitializing();
protected:
	Initializing(void);
};

