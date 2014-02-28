#include "Hest2.h"


Hest2::Hest2(void)
{
}


Hest2::~Hest2(void)
{
}



void Hest2::run()
{
	distance = 0;
	while(1)
	{
		distance ++;
		cout << "Hest 2 er nået til " << distance << endl;
		//Sleep(10);
	}
}