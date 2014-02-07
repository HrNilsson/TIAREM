#pragma once
#include "operational.h"
class Ready :
	public Operational
{
public:
	static Ready* Instance();
	~Ready(void);
	void Restart() override;
	void Configure() override;
	void Start() override;
private:
	static Ready* _instance;
protected:
	Ready(void);
};

