#pragma once
#include "realtimeloop.h"
class Mode3 :
	public RealTimeLoop
{
public:
	static Mode3* Instance();
	~Mode3(void);
	void chMode(EmbeddedSystemX* sys) override;
	void eventX(EmbeddedSystemX* sys) override;
	void entry() override;
private:
	static Mode3* _instance;
protected:
	Mode3(void);
};

