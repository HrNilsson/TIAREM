#pragma once
#include "Output.h"

namespace Application{
	namespace ContinuousProcessing {

		class SimulatedOutput :
			public Application::ContinuousProcessing::Output
		{
		public:
			SimulatedOutput();
			~SimulatedOutput();
			void outputResult(void) override;
		};

	}
}