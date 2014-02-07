#pragma once
#include "operational.h"
class Ready :
	public Operational
{
public:
	Ready(void);
	~Ready(void);
	void Restart() override;
	void Configure() override;
	void Start() override;
};

