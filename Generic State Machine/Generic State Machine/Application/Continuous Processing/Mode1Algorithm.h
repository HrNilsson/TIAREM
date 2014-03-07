#pragma once
#include "Algorithm.h"

namespace Application{
	namespace ContinuousProcessing {

		class Mode1Algorithm :
			public Application::ContinuousProcessing::Algorithm
		{
		public:
			Mode1Algorithm();
			~Mode1Algorithm();
			void execute(void) override;
		};

	}
}