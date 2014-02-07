#include "stdafx.h"
#include "Failure.h"
#include "PowerOnSelfTest.h"

Failure* Failure::_instance = 0;

Failure* Failure::Instance(void)
{
	if (_instance == 0)
	{
		_instance = new Failure;
	}
	return _instance;
}

Failure::Failure(void)
{
}


Failure::~Failure(void)
{
}


void Failure::Exit(EmbeddedSystemX* sys)
{
	//Close the program somehow..
}


void Failure::Restart(EmbeddedSystemX* sys)
{
	ChangeState(sys, PowerOnSelfTest::Instance());
}


void Failure::display()
{
	using namespace std;
	cout << "Something" << endl;
}


void Failure::entry()
{
	display();
}
