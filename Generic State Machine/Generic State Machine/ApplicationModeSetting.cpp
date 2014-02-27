#include "stdafx.h"
#include "ApplicationModeSetting.h"


ApplicationModeSetting::ApplicationModeSetting()
{
}


ApplicationModeSetting::~ApplicationModeSetting()
{
}

void ApplicationModeSetting::entry(EmbeddedSystemX* sys)
{

}

void ApplicationModeSetting::chMode(EmbeddedSystemX* sys)
{

}

void ApplicationModeSetting::eventX(EmbeddedSystemX* sys)
{

}

void ApplicationModeSetting::eventY(EmbeddedSystemX* sys)
{

}

void ApplicationModeSetting::ChangeState(EmbeddedSystemX* sys, ApplicationModeSetting* pS)
{
	sys->ChangeState(pS);
}
