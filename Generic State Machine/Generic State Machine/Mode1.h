#pragma once
#include "realtimeloop.h"
class Mode1 :
	public RealTimeLoop
{
public:
	static Mode1* Instance();
	~Mode1(void);
	void chMode() override;
	void eventX() override;
	void Restart() override;
private:
	static Mode1* _instance;
protected:
	Mode1(void);
};

