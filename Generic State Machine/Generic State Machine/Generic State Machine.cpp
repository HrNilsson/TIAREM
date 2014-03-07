// Generic State Machine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Application\Discrete Processing\DiscreteProcessingThread.h"
#include "Application\Continuous Processing\ContinuousProcessingThread.h"

int _tmain(int argc, _TCHAR* argv[])
{
	using namespace Application::DiscreteProcessing;
	using namespace Application::ContinuousProcessing;
	
	DiscreteProcessingThread dThread = DiscreteProcessingThread();
	ContinuousProcessingThread cThread = ContinuousProcessingThread();

	dThread.start();
	cThread.start();

	while (1)
	{

	}
	return 0;
}
