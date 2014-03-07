#include "stdafx.h"
#include <iostream>
#include "SimulatedInput.h"

namespace Application{
	namespace ContinuousProcessing {

		SimulatedInput::SimulatedInput()
		{
		}


		SimulatedInput::~SimulatedInput()
		{
		}
		
		void SimulatedInput::read()
		{
			using namespace std;
			cout << "Reading simulated input." << endl;
		}
	}
}