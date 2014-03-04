#pragma once
#include "Thread.h"

namespace Application{
	namespace DiscreteProcessingThread {

		class DiscreteProcessingThread :
			public AbstractOS::Thread
		{
		public:
			DiscreteProcessingThread();
			~DiscreteProcessingThread();
			void run(void) override;
		};

	}
}