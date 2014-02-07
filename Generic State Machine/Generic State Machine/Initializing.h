#pragma once
#include "embeddedsystemxstate.h"
class Initializing :
	public EmbeddedSystemXState
{
public:
	static Initializing* Instance();
	~Initializing(void);
	void Initialized() override;
private:
	static Initializing* _instance;
	void startInitializing();
protected:
	Initializing(void);
};

