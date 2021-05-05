#pragma once
#include "rlua.h"
#include <Wininet.h>
#pragma comment(lib, "wininet.lib")

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

int loadstring(DWORD rL)
{
	std::string url = r_checklstring(rL, 1, 0);
	HINTERNET interwebs = InternetOpenA("Mozilla/5.0", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, NULL);
	std::string rtn;
	std::string webdata;

	if (interwebs) {
		HINTERNET url_file = InternetOpenUrlA(interwebs, url.c_str(), NULL, NULL, NULL, NULL);

		if (url_file) {
			char buffer[2000];
			DWORD bytes_read;

			do {
				InternetReadFile(url_file, buffer, 2000, &bytes_read);
				rtn.append(buffer, bytes_read);
				memset(buffer, 0, 2000);
			} while (bytes_read);

			InternetCloseHandle(interwebs);
			InternetCloseHandle(url_file);
			webdata = replaceAll(rtn, "|n", "\r\n");
		}
	}

	InternetCloseHandle(interwebs);
	webdata = replaceAll(rtn, "|n", "\r\n");
	r_pushlstring(rL, webdata.c_str(), webdata.size());
	return 1;
}
