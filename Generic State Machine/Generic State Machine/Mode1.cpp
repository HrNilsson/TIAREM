#include "stdafx.h"
#include "Mode1.h"
#include "PowerOnSelfTest.h"
#include "Suspended.h"
#include "Ready.h"
#include "Mode2.h"

Mode1* Mode1::_instance = 0;

Mode1* Mode1::Instance(void)
{
	if (_instance == 0)
	{
		_instance = new Mode1;
	}
	return _instance;
}

Mode1::Mode1(void)
{
}


Mode1::~Mode1(void)
{
}


void Mode1::chMode(EmbeddedSystemX* sys)
{
	ChangeState(sys, Mode2::Instance());
}


void Mode1::eventX(EmbeddedSystemX* sys)
{
	using namespace std;
	cout << "Running ResponseM1eventX" << endl;
}

void Mode1::entry()
{
	using namespace std;
	cout << "Mode1 state entered." << endl;
}