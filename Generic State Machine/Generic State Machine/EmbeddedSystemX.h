#pragma once
#include "Command.h"

class EmbeddedSystemX
{
public:
	EmbeddedSystemX(void);
	~EmbeddedSystemX(void);

	void handleCommand(Command* pCmd);

	void display(int ErrorNo);
	void display(char* string);

	void systemSelfTest(void);
	void startInitializing(void);
	void readConfigurationInfo(void);

	void PerformConfigurationX(void);
	void responseM1eventX(void);
	void responseM2eventX(void);
	void responseM2eventY(void);
	void responseM3eventX(void);

	void exitStateMachine(void);
private:
	friend class EmbeddedSystemXState;
	void ChangeState(EmbeddedSystemXState*);
	EmbeddedSystemXState* _state;
	int VersionNo;
	char* Name;
};

