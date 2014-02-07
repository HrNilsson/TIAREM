#pragma once
#include "operational.h"
class Ready :
	public Operational
{
public:
	static Ready* Instance();
	~Ready(void);
	void Restart(EmbeddedSystemX* sys) override;
	void Configure(EmbeddedSystemX* sys) override;
	void Start(EmbeddedSystemX* sys) override;
private:
	static Ready* _instance;
protected:
	Ready(void);
};

