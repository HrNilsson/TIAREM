#include "stdafx.h"
#include "EmbeddedSystemX.h"
#include "PowerOnSelfTest.h"

EmbeddedSystemXState* _state;

EmbeddedSystemX::EmbeddedSystemX(void)
{
	_state = PowerOnSelfTest::Instance();
	_state->entry(this);
}


EmbeddedSystemX::~EmbeddedSystemX(void)
{
}

void EmbeddedSystemX::SelfTestOk(void)
{
	_state->SelfTestOk(this);
}

void EmbeddedSystemX::Initialized(void)
{
	_state->Initialized(this);
}

void EmbeddedSystemX::Restart(void)
{
	_state->Restart(this);
}

void EmbeddedSystemX::Configure(void)
{
	_state->Configure(this);
}

void EmbeddedSystemX::ConfigurationEnded(void)
{
	_state->ConfigurationEnded(this);
}

void EmbeddedSystemX::Exit(void)
{
	_state->Exit(this);
}

void EmbeddedSystemX::Stop(void)
{
	_state->Stop(this);
}

void EmbeddedSystemX::Start(void)
{
	_state->Start(this);
}

void EmbeddedSystemX::Supend(void)
{
	_state->Suspend(this);
}

void EmbeddedSystemX::Resume(void)
{
	_state->Resume(this);
}

void EmbeddedSystemX::SelfTestFailed(int ErrorNo)
{
	_state->SelfTestFailed(this, ErrorNo);
}

void EmbeddedSystemX::ConfigX(void)
{
	_state->ConfigX(this);
}

void EmbeddedSystemX::chMode(void)
{
	_state->chMode(this);
}

void EmbeddedSystemX::eventX(void)
{
	_state->eventX(this);
}

void EmbeddedSystemX::eventY(void)
{
	_state->eventY(this);
}


void EmbeddedSystemX::ChangeState(EmbeddedSystemXState* pS)
{
	_state = pS;
	_state->entry(this);
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
