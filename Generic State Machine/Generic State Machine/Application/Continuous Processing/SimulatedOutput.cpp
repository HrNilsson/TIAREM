#include "stdafx.h"
#include <iostream>
#include "SimulatedOutput.h"

namespace Application {
	namespace ContinuousProcessing {

		SimulatedOutput::SimulatedOutput()
		{
		}


		SimulatedOutput::~SimulatedOutput()
		{
		}
		
		void SimulatedOutput::outputResult()
		{
			using namespace std;
			cout << "Outputting simulated result." << endl;
		}
	}
}