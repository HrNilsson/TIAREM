#pragma once
#include "Input.h"

namespace Application{
	namespace ContinuousProcessing {

		class RealTimeInput :
			public Application::ContinuousProcessing::Input
		{
		public:
			RealTimeInput();
			~RealTimeInput();
			void read(void) override;
		};

	}
}