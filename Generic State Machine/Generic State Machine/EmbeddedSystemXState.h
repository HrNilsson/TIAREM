#pragma once
#include <iostream>

using namespace std;

class EmbeddedSystemXState
{
public:
	~EmbeddedSystemXState(void);
	virtual void Initialized(void);
	virtual void Restart(void);
	virtual void Configure(void);
	virtual void ConfigurationEnded(void);
	virtual void Exit(void);
	virtual void Stop(void);
	virtual void Start(void);
	virtual void Suspend(void);
	virtual void Resume(void);
	virtual void ConfigX(void);
	virtual void chMode(void);
	virtual void eventX(void);
	virtual void eventY(void);

protected:
	EmbeddedSystemXState(void);
public:
	virtual void SelfTestOk();
	virtual void SelfTestFailed();
};

