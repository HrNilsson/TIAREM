#pragma once
#include "embeddedsystemxstate.h"

//using namespace std;

class PowerOnSelfTest :
	public EmbeddedSystemXState
{
public:
	static PowerOnSelfTest* Instance();
	~PowerOnSelfTest(void);
	void SelfTestOk(EmbeddedSystemX* sys) override;
	void SelfTestFailed(EmbeddedSystemX* sys) override;
	void entry() override;
private:
	static PowerOnSelfTest* _instance;
	void systemSelfTest(void);
protected:
	PowerOnSelfTest(void);
};

