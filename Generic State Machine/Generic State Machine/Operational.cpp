#include "stdafx.h"
#include "Operational.h"
#include "PowerOnSelfTest.h"


Operational::Operational(void)
{
}


Operational::~Operational(void)
{
}

void Operational::Restart(EmbeddedSystemX* sys)
{
	ChangeState(sys, PowerOnSelfTest::Instance());
}
