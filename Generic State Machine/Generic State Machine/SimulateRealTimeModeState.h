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
			virtual void entry(EmbeddedSystemX* sys);
			virtual void RunRealTime(EmbeddedSystemX* sys);
			virtual void Simulate(EmbeddedSystemX* sys);
		protected:
			SimulateRealTimeModeState();
			void ChangeState(EmbeddedSystemX* sys, SimulateRealTimeModeState*);
		};

	}
}