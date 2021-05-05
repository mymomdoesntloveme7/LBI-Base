#pragma once
#include "rlua.h"

int getgenv(DWORD rL) 
{
	r_pushvalue(rL, LUA_GLOBALSINDEX);
	return 1;
}

int getsenv(DWORD rL) 
{
	r_pushvalue(rL, LUA_ENVIRONINDEX);
	return 1;
}

int getrenv(DWORD rL)
{
	r_pushvalue(rL, LUA_GLOBALSINDEX);
	return 1;
}

int getreg(DWORD rL) 
{
	r_pushvalue(rL, LUA_REGISTRYINDEX);
	return 1;
}
