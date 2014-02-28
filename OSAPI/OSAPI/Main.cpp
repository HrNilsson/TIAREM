

#include <iostream>
#include "Thread.h"
#include "Hest1.h"
#include "Hest2.h"

using namespace std;

void main(void)
{
		
	Hest1 _hest1;
	Hest2 _hest2;

	_hest1.setPriority(Thread::PRIORITY_HIGH);
	_hest2.setPriority(Thread::PRIORITY_LOW);
	
	_hest2.start();
	_hest1.start();

	
	while(1)
	{}

}