#include "Hest1.h"


Hest1::Hest1(void)
{

}


Hest1::~Hest1(void)
{
}

void Hest1::run()
{
	distance = 0;
	while(1)
	{
		distance ++;
		cout << "Hest 1 er nået til " << distance << endl;
		//Sleep(10);

	}
}