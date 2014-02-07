#pragma once
#include "embeddedsystemxstate.h"
class PowerOnSelfTest :
	public EmbeddedSystemXState
{
public:
	static PowerOnSelfTest* Instance();
	~PowerOnSelfTest(void);
	void SelfTestOk() override;
	void SelfTestFailed() override;
private:
	static PowerOnSelfTest* _instance;
	void systemSelfTest(void);
protected:
	PowerOnSelfTest(void);
};

