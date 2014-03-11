#pragma once
#include "EmbeddedSystemX.h"

namespace Application
{
	namespace DiscreteProcessing
	{
		class SimulateRealTimeModeState
		{
		public:
			virtual ~SimulateRealTimeModeState();
			virtual void entry(EmbeddedSystemX*);
			virtual void RunRealTime(EmbeddedSystemX*);
			virtual void Simulate(EmbeddedSystemX*);
		protected:
			SimulateRealTimeModeState();
			void ChangeState(EmbeddedSystemX*, SimulateRealTimeModeState*);
			void SetInput(EmbeddedSystemX*, EmbeddedSystemX::INPUTOUTPUT);
			void SetOutput(EmbeddedSystemX*, EmbeddedSystemX::INPUTOUTPUT);
		};

	}
}