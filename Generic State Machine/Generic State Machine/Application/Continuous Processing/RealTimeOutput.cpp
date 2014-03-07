#include "stdafx.h"
#include <iostream>
#include "RealTimeOutput.h"

namespace Application{
	namespace ContinuousProcessing {

		RealTimeOutput::RealTimeOutput()
		{
		}


		RealTimeOutput::~RealTimeOutput()
		{
		}
		
		void RealTimeOutput::outputResult()
		{
			using namespace std;
			cout << "Outputting realtime result." << endl;
		}
	}
}