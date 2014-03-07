#pragma once
#include "Input.h"

namespace Application{
	namespace ContinuousProcessing {

		class SimulatedInput :
			public Application::ContinuousProcessing::Input
		{
		public:
			SimulatedInput();
			~SimulatedInput();
			void read(void) override;
		};

	}
}