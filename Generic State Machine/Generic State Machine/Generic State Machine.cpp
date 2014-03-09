// Generic State Machine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Application\Discrete Processing\DiscreteProcessingThread.h"
#include "Application\Continuous Processing\ContinuousProcessingThread.h"
#include "Application\Continuous Processing\Mode1Algorithm.h"
#include "Application\Continuous Processing\RealTimeInput.h"
#include "Application\Continuous Processing\RealTimeOutput.h"
#include "Application\ProcessingMode.h"

int _tmain(int argc, _TCHAR* argv[])
{
	using namespace Application;
	using namespace Application::DiscreteProcessing;
	using namespace Application::ContinuousProcessing;
	
	
	DiscreteProcessingThread dThread = DiscreteProcessingThread();

	ProcessingMode processingMode = ProcessingMode();
	ContinuousProcessingThread cThread = ContinuousProcessingThread(&processingMode);

	Mode1Algorithm alg = Mode1Algorithm();
	RealTimeInput inp = RealTimeInput();
	RealTimeOutput out = RealTimeOutput();

	dThread.start();
	
	processingMode.setInput(&inp);
	processingMode.setAlgortihm(&alg);
	processingMode.setOutput(&out);

	cThread.start();
	
	while (1)
	{

	}
	return 0;
}
