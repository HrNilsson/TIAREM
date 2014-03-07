#pragma once
#include "Output.h"

namespace Application{
	namespace ContinuousProcessing {

		class RealTimeOutput :
			public Application::ContinuousProcessing::Output
		{
		public:
			RealTimeOutput();
			~RealTimeOutput();
			void outputResult(void) override;
		};

	}
}