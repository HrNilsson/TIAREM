#pragma once
#include "Algorithm.h"

namespace Application{
	namespace ContinuousProcessing {

		class Mode2Algorithm :
			public Application::ContinuousProcessing::Algorithm
		{
		public:
			Mode2Algorithm();
			~Mode2Algorithm();
			void execute(void) override;
		};

	}
}