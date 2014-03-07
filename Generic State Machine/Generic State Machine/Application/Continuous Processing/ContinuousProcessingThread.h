#pragma once
#include "Thread.h"

namespace Application{
	namespace ContinuousProcessing {

		class ContinuousProcessingThread :
			public AbstractOS::Thread
		{
		public:
			ContinuousProcessingThread();
			~ContinuousProcessingThread();
			void run(void) override;
		};

	}
}