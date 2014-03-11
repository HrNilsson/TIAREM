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
		Mode1Algorithm* _pM1A;
		Mode2Algorithm* _pM2A;
		Mode3Algorithm* _pM3A;
		SimulatedInput* _pSI;
		RealTimeInput* _pRI;
		SimulatedOutput* _pSO;
		RealTimeOutput* _pRO;

		ProcessingMode processingMode = ProcessingMode();
		ContinuousProcessingThread cThread = ContinuousProcessingThread(&processingMode); 


		EmbeddedSystemX::EmbeddedSystemX(void)
		{
			_pM1A = new Mode1Algorithm();
			_pM2A = new Mode2Algorithm();
			_pM3A = new Mode3Algorithm();

			_pSI = new SimulatedInput();
			_pRI = new RealTimeInput();

			_pSO = new SimulatedOutput();
			_pRO = new RealTimeOutput();

			_state = PowerOnSelfTest::Instance();
			_state->entry(this);
		}


		EmbeddedSystemX::~EmbeddedSystemX(void)
		{
			delete _state;
			delete _pAppSubState;
			delete _pSimSubState;

			delete _pM1A;
			delete _pM2A;
			delete _pM3A;

			delete _pSI;
			delete _pRI;

			delete _pSO;
			delete _pRO;
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

		void EmbeddedSystemX::SetInput(EmbeddedSystemX::INPUTOUTPUT io)
		{
			switch (io)
			{
			case EmbeddedSystemX::INPUTOUTPUT::REALTIME:
				processingMode.setInput(_pRI);
				break;
			case EmbeddedSystemX::INPUTOUTPUT::SIMULATED:
				processingMode.setInput(_pSI);
				break;
			default:
				break;
			}
		
		}
		void EmbeddedSystemX::SetOutput(EmbeddedSystemX::INPUTOUTPUT io)
		{
			switch (io)
			{
			case EmbeddedSystemX::INPUTOUTPUT::REALTIME:
				processingMode.setOutput(_pRO);
				break;
			case EmbeddedSystemX::INPUTOUTPUT::SIMULATED:
				processingMode.setOutput(_pSO);
				break;
			default:
				break;
			}
		}

		void EmbeddedSystemX::SetAlgorithm(EmbeddedSystemX::ALGORITHM alg)
		{
			switch (alg)
			{
			case EmbeddedSystemX::ALGORITHM::MODE1:
				processingMode.setAlgortihm(_pM1A);
				break;
			case EmbeddedSystemX::ALGORITHM::MODE2:
				processingMode.setAlgortihm(_pM2A);
				break;
			case EmbeddedSystemX::ALGORITHM::MODE3:
				processingMode.setAlgortihm(_pM3A);
				break;
			default:
				break;
			}
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