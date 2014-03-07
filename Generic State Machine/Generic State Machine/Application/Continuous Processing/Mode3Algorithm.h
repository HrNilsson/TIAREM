#pragma once
#include "Algorithm.h"

namespace Application{
	namespace ContinuousProcessing {

		class Mode3Algorithm :
			public Application::ContinuousProcessing::Algorithm
		{
		public:
			Mode3Algorithm();
			~Mode3Algorithm();
			void execute(void) override;
		};

	}
}