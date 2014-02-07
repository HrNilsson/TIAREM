#pragma once
#include "realtimeloop.h"
class Mode2 :
	public RealTimeLoop
{
public:
	static Mode2* Instance();
	~Mode2(void);
	void chMode() override;
	void eventX() override;
	void eventY() override;
	void Restart() override;
private:
	static Mode2* _instance;
protected:
	Mode2(void);
};

