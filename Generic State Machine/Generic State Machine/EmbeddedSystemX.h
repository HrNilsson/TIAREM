#pragma once
class EmbeddedSystemX
{
public:
	EmbeddedSystemX(void);
	~EmbeddedSystemX(void);
	void SelftestOk(void);
	void Initialized(void);
	void Restart(void);
	void Configure(void);
	void ConfigurationEnded(void);
	void Exit(void);
	void Stop(void);
	void Start(void);
	void Supend(void);
	void Resume(void);
	void SelfTestFailed(int ErrorNo);
	void ConfigX(void);
	void chMode(void);
	void eventX(void);
	void eventY(void);

private:
	friend class EmbeddedSystemXState;
	void ChangeState(EmbeddedSystemXState*);
	EmbeddedSystemXState* _state;

};
