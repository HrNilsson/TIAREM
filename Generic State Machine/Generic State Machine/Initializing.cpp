#include "stdafx.h"
#include "Initializing.h"
#include "Ready.h"

Initializing* Initializing::_instance = 0;

Initializing* Initializing::Instance(void)
{
	if (_instance == 0)
	{
		_instance = new Initializing;
	}
	return _instance;
}

Initializing::Initializing(void)
{
}


Initializing::~Initializing(void)
{
}


void Initializing::Initialized(EmbeddedSystemX* sys)
{
	ChangeState(sys, Ready::Instance());
}


void Initializing::startInitializing()
{
	using namespace std;
	cout << "Start initializing." << endl;
}


void Initializing::entry()
{
	using namespace std;
	cout << "Initializing state entered." << endl;
	startInitializing();
}

