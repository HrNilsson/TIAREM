// Generic State Machine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "EmbeddedSystemX.h"

int _tmain(int argc, _TCHAR* argv[])
{
	using namespace std;

	cout << "The following inputs is allowed :" << endl;
	cout << "1  - SelfTestOk" << endl;
	cout << "2  - SelfTestFailed" << endl;
	cout << "3  - Initialized" << endl;
	cout << "4  - Restart" << endl;
	cout << "5  - Exit" << endl;
	cout << "6  - Start" << endl;
	cout << "7  - Stop" << endl;
	cout << "8  - Configure" << endl;
	cout << "9  - ConfigurationEnded" << endl;
	cout << "10 - Suspend" << endl;
	cout << "11 - Resume" << endl;
	cout << "12 - chMode" << endl;
	cout << "13 - ConfigX" << endl;
	cout << "14 - eventX" << endl;
	cout << "15 - eventY" << endl << endl;

	EmbeddedSystemX sys = EmbeddedSystemX();

	while (1)
	{
		//Read inputs
		int i; 
		cin >> i;

		switch (i)
		{
		case 1:
			sys.SelfTestOk();
			break;
		case 2:
			cout << "Please enter error number: ";
			cin >> i;
			sys.SelfTestFailed(i);
			break;
		case 3:
			sys.Initialized();
			break;
		case 4:
			sys.Restart();
			break;
		case 5:
			sys.Exit();
			break;
		case 6:
			sys.Start();
			break;
		case 7:
			sys.Stop();
			break;
		case 8:
			sys.Configure();
			break;
		case 9:
			sys.ConfigurationEnded();
			break;
		case 10:
			sys.Supend();
			break;
		case 11:
			sys.Resume();
			break;
		case 12:
			sys.chMode();
			break;
		case 13:
			sys.ConfigX();
			break;
		case 14:
			sys.eventX();
			break;
		case 15:
			sys.eventY();
			break;
		default:
			cout << "Input: " << i << " does not have any function." << endl;
			break;
		}
		
	}
	return 0;
}