#include "stdafx.h"
#include <iostream>
#include "RealTimeInput.h"

namespace Application{
	namespace ContinuousProcessing {

		RealTimeInput::RealTimeInput()
		{
		}


		RealTimeInput::~RealTimeInput()
		{
		}
		
		void RealTimeInput::read()
		{
			using namespace std;
			cout << "Reading realtime input." << endl;
		}
	}
}