#pragma once
#include "rlua.h"

void replaceAll(std::string& str, const std::string& from, const std::string& to) {
    if(from.empty())
        return;
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

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

int loadstring(DWORD rL)
{
	Execute(rL, r_checklstring(rL, 1, 0));
	return 0;
}
