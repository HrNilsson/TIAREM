#pragma once
#include "embeddedsystemxstate.h"
class PowerOnSelfTest :
	public EmbeddedSystemXState
{
public:
	~PowerOnSelfTest(void);
	void SelfTestOk(void);
	void SelfTestFailed(void);

protected:
	PowerOnSelfTest(void);

private:
	void SystemSelfTest(void);
};

