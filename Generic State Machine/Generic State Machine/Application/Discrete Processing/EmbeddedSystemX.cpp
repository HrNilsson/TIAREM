#include "stdafx.h"
#include <iostream>
#include "EmbeddedSystemX.h"
#include "PowerOnSelfTest.h"
#include "Mode1.h"
#include "Simulation.h"
#include "../Continuous Processing/Mode1Algorithm.h"
#include "../Continuous Processing/Mode2Algorithm.h"
#include "../Continuous Processing/Mode3Algorithm.h"
#include "../Continuous Processing/SimulatedInput.h"
#include "../Continuous Processing/RealTimeInput.h"
#include "../Continuous Processing/SimulatedOutput.h"
#include "../Continuous Processing/RealTimeOutput.h"
#include "../ProcessingMode.h"
#include "../Continuous Processing/ContinuousProcessingThread.h"


namespace Application
{
	namespace DiscreteProcessing
	{

		EmbeddedSystemXState* _state;
		ApplicationModeSetting* _pAppSubState;
		SimulateRealTimeModeState* _pSimSubState;
		
		using namespace ContinuousProcessing;

		ProcessingMode processingMode = ProcessingMode();
		ContinuousProcessingThread cThread = ContinuousProcessingThread(&processingMode); 


		EmbeddedSystemX::EmbeddedSystemX(void)
		{
			//Create all concrete strategy singletons.
			Mode1Algorithm::Instance();
			Mode2Algorithm::Instance();
			Mode3Algorithm::Instance();

			SimulatedInput::Instance();
			RealTimeInput::Instance();

			SimulatedOutput::Instance();
			RealTimeOutput::Instance();

			_state = PowerOnSelfTest::Instance();
			_state->entry(this);
		}


		EmbeddedSystemX::~EmbeddedSystemX(void)
		{
			delete _state;
			delete _pAppSubState;
			delete _pSimSubState;
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

		void EmbeddedSystemX::SetInput(Input* in)
		{
			processingMode.setInput(in);
		}

		void EmbeddedSystemX::SetOutput(Output* out)
		{
			processingMode.setOutput(out);
		}

		void EmbeddedSystemX::SetAlgorithm(Algorithm* alg)
		{
			processingMode.setAlgortihm(alg);
		}

		void EmbeddedSystemX::StartRealTimeThread(void)
		{
			processingMode.setRunning(true);
			cThread.start();
		}

		void EmbeddedSystemX::StopRealTimeThread(void)
		{
			processingMode.setRunning(false);
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
	}
}