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
	using namespace std;
	cout << "Exit - Program should end here?" << endl;
}


void Failure::Restart(EmbeddedSystemX* sys)
{
	ChangeState(sys, PowerOnSelfTest::Instance());
}


void Failure::display()
{
	using namespace std;
	cout << "Displaying ErrorNo..." << endl;
}


void Failure::entry()
{
	using namespace std;
	cout << "Failure state entered." << endl;
	display();
}
