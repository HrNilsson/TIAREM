#pragma once
#include "EmbeddedSystemX.h"

class ApplicationModeSetting
{
public:
	virtual ~ApplicationModeSetting();
	virtual void entry(EmbeddedSystemX* sys);
	virtual void chMode(EmbeddedSystemX* sys);
	virtual void eventX(EmbeddedSystemX* sys);
	virtual void eventY(EmbeddedSystemX* sys);
protected:
	ApplicationModeSetting();
	void ChangeState(EmbeddedSystemX* sys, ApplicationModeSetting*);
};

