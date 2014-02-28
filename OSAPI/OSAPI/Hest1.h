#pragma once
#include "thread.h"
#include <iostream>
#include <windows.h>

class Hest1 :
	public Thread
{
public:
	Hest1(void);
	~Hest1(void);

	void run() override;
private:
	int distance;
};

