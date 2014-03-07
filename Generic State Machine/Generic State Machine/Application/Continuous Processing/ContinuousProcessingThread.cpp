#include "stdafx.h"
#include "ContinuousProcessingThread.h"

namespace Application{
	namespace ContinuousProcessing {

		ContinuousProcessingThread::ContinuousProcessingThread()
		{
		}


		ContinuousProcessingThread::~ContinuousProcessingThread()
		{
		}
		
		void ContinuousProcessingThread::run()
		{
			running = true;

			while (running)
			{
				pInput->read();
				pAlgorithm->execute();
				pOutput->outputResult();
				Sleep(1000);
			}
		}

		void ContinuousProcessingThread::stop()
		{
			running = false;
		}

		void ContinuousProcessingThread::setInput(Input* p)
		{
			pInput = p;
		}

		void ContinuousProcessingThread::setOutput(Output* p)
		{
			pOutput = p;
		}

		void ContinuousProcessingThread::setAlgorithm(Algorithm* p)
		{
			pAlgorithm = p;
		}

	}
}