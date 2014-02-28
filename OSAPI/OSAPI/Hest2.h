#pragma once
#include "thread.h"
#include <iostream>
#include <windows.h>

class Hest2 :
	public Thread
{
public:
	Hest2(void);
	~Hest2(void);

	void run() override;
private:
	int distance;
};

