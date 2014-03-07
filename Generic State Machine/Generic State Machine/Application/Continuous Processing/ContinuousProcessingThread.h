#pragma once
#include "Thread.h"
#include "Input.h"
#include "Output.h"
#include "Algorithm.h"

namespace Application{
	namespace ContinuousProcessing {

		class ContinuousProcessingThread :
			public AbstractOS::Thread
		{
		public:
			ContinuousProcessingThread();
			~ContinuousProcessingThread();
			void run(void) override;
			void stop(void);
			void setInput(Input*);
			void setOutput(Output*);
			void setAlgorithm(Algorithm*);
		private:
			bool running = true;
			Input* pInput;
			Output* pOutput;
			Algorithm* pAlgorithm;
		};

	}
}