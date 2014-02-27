#include "stdafx.h"
#include <iostream>
#include "EmbeddedSystemX.h"
#include "PowerOnSelfTest.h"
#include "Mode1.h"
#include "Simulation.h"


EmbeddedSystemXState* _state;
ApplicationModeSetting* _pAppSubState;
SimulateRealTimeModeState* _pSimSubState;

EmbeddedSystemX::EmbeddedSystemX(void)
{
	_state = PowerOnSelfTest::Instance();
	_state->entry(this);
}


EmbeddedSystemX::~EmbeddedSystemX(void)
{
}

void EmbeddedSystemX::handleCommand(Command* pCmd)
{
	pCmd->execute(this, _state);
	delete pCmd;
}


void EmbeddedSystemX::ChangeState(EmbeddedSystemXState* pSys)
{
	_state = pSys;
	_state->entry(this);
}

void EmbeddedSystemX::ChangeState(ApplicationModeSetting* pSys)
{
	_pAppSubState = pSys;
	_pAppSubState->entry(this);
}

void EmbeddedSystemX::ChangeState(SimulateRealTimeModeState* pSys)
{
	_pSimSubState = pSys;
	_pSimSubState->entry(this);
}

ApplicationModeSetting* EmbeddedSystemX::getStateApp(void)
{
	return _pAppSubState;
}

SimulateRealTimeModeState* EmbeddedSystemX::getStateSim(void)
{
	return _pSimSubState;
}

void EmbeddedSystemX::display(int ErrorNo)
{
	using namespace std;
	cout << "SelfTestFailed: " << ErrorNo << endl;
}

void EmbeddedSystemX::display(char* string)
{
	using namespace std;
	cout << string << endl;
}


void EmbeddedSystemX::systemSelfTest()
{
	display("Running selftest");
}


void EmbeddedSystemX::startInitializing()
{
	display("Initializing");
}


void EmbeddedSystemX::readConfigurationInfo()
{
	display("Reading configuration info.");
}


void EmbeddedSystemX::PerformConfigurationX()
{
	display("Performing configuration.");
}


void EmbeddedSystemX::responseM1eventX()
{
	display("Running ResponseM1eventX");
}


void EmbeddedSystemX::responseM2eventX()
{
	display("Running ResponseM2eventX");
}


void EmbeddedSystemX::responseM2eventY()
{
	display("Running ResponseM2eventY");
}


void EmbeddedSystemX::responseM3eventX()
{
	display("Running ResponseM3eventX");
}


void EmbeddedSystemX::exitStateMachine()
{
	display("Exit state machine.");
}
