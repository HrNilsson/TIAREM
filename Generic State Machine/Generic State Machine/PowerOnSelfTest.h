#pragma once
#include "embeddedsystemxstate.h"
class PowerOnSelfTest :
	public EmbeddedSystemXState
{
public:
	PowerOnSelfTest(void);
	~PowerOnSelfTest(void);
	void SelfTestOk() override;
	void SelfTestFailed() override;
private:
	void systemSelfTest(void);
};

