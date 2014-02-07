#pragma once
#include "operational.h"
class Suspended :
	public Operational
{
public:
	static Suspended* Instance();
	~Suspended(void);
	void Restart() override;
	void Resume() override;
	void Stop() override;
private:
	static Suspended* _instance;
protected:
	Suspended(void);
};

