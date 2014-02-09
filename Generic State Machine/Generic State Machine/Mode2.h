#pragma once
#include "realtimeloop.h"
class Mode2 :
	public RealTimeLoop
{
public:
	static Mode2* Instance();
	~Mode2(void);
	void chMode(EmbeddedSystemX* sys) override;
	void eventX(EmbeddedSystemX* sys) override;
	void eventY(EmbeddedSystemX* sys) override;
	void entry() override;
private:
	static Mode2* _instance;
protected:
	Mode2(void);
};

