#pragma once
#include "rlua.h"

int getgenv(int rL) 
{
	r_pushvalue(rL, LUA_GLOBALSINDEX);
	return 1;
}

int getsenv(int rL) 
{
	r_pushvalue(rL, LUA_ENVIRONINDEX);
	return 1;
}

int getrenv(int rL)
{
	r_pushvalue(rL, LUA_GLOBALSINDEX);
	return 1;
}

int getreg(int rL) 
{
	r_pushvalue(rL, LUA_REGISTRYINDEX);
	return 1;
}