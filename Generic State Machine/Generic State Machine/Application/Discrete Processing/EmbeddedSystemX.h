#pragma once
#include "Command.h"

namespace Application
{
	namespace DiscreteProcessing
	{

		class EmbeddedSystemX
		{
		public:
			EmbeddedSystemX(void);
			~EmbeddedSystemX(void);

			void handleCommand(Command* pCmd);

			void display(int ErrorNo);
			void display(char* string);

			void systemSelfTest(void);
			void startInitializing(void);
			void readConfigurationInfo(void);

			void PerformConfigurationX(void);
			void responseM1eventX(void);
			void responseM2eventX(void);
			void responseM2eventY(void);
			void responseM3eventX(void);

			void exitStateMachine(void);

			enum INPUTOUTPUT
			{
				SIMULATED, REALTIME
			};

			enum ALGORITHM
			{
				MODE1, MODE2, MODE3
			};

		private:
			friend class EmbeddedSystemXState;
			friend class ApplicationModeSetting;
			friend class SimulateRealTimeModeState;

			void ChangeState(EmbeddedSystemXState*);
			void ChangeState(ApplicationModeSetting*);
			void ChangeState(SimulateRealTimeModeState*);

			void SetInput(INPUTOUTPUT);
			void SetOutput(INPUTOUTPUT);
			void SetAlgorithm(ALGORITHM);


			EmbeddedSystemXState* _state;
			ApplicationModeSetting* _pAppSubState;
			SimulateRealTimeModeState* _pSimSubState;

			int VersionNo;
			char* Name;
		public:
			ApplicationModeSetting* getStateApp(void);
			SimulateRealTimeModeState* getStateSim(void);
			void StartRealTimeThread(void);
			void StopRealTimeThread(void);
		};

	}
}