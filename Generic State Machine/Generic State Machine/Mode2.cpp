#include "stdafx.h"
#include "Mode2.h"
#include "PowerOnSelfTest.h"
#include "Suspended.h"
#include "Ready.h"
#include "Mode3.h"

Mode2* Mode2::_instance = 0;

Mode2* Mode2::Instance(void)
{
	if (_instance == 0)
	{
		_instance = new Mode2;
	}
	return _instance;
}

Mode2::Mode2(void)
{
}


Mode2::~Mode2(void)
{
}


void Mode2::chMode(EmbeddedSystemX* sys)
{
	ChangeState(sys, Mode3::Instance());
}


void Mode2::eventX(EmbeddedSystemX* sys)
{
	using namespace std;
	cout << "Running ResponseM2eventX" << endl;
}


void Mode2::eventY(EmbeddedSystemX* sys)
{
	using namespace std;
	cout << "Running ResponseM2eventY" << endl;
}

void Mode2::entry()
{
	using namespace std;
	cout << "Mode2 state entered." << endl;
}