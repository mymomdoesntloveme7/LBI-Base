// dllmain.cpp : Defines the entry point for the DLL application.
#include <Windows.h>
#include <cstdio>
#include <thread>
#include <iostream>
#include <string>
#include "rlua.h"
#include "execute.h"
#include "functions.h"
#include "callcheck.h"

using namespace Callcheck;

DWORD __stdcall Pipe(void*)
{
    char buffer[999999];
    DWORD len;
    HANDLE pipe = CreateNamedPipe(TEXT("\\\\.\\pipe\\ExploitPipe"),
        PIPE_ACCESS_DUPLEX | PIPE_TYPE_BYTE | PIPE_READMODE_BYTE, PIPE_WAIT,
        1, NULL, NULL, NMPWAIT_USE_DEFAULT_WAIT, NULL);

    while (pipe != INVALID_HANDLE_VALUE)
    {
        if (ConnectNamedPipe(pipe, NULL) != FALSE)
        {
            while (ReadFile(pipe, buffer, sizeof(buffer) - 1, &len, NULL) != FALSE)
            {
                buffer[len] = '\0';
            }
            Execute(rL, buffer);
        }
        DisconnectNamedPipe(pipe);
    }
}

void Main()
{
    // Console bypass
    VirtualProtect(FreeConsole, 1, PAGE_EXECUTE_READWRITE, new unsigned long);
    *reinterpret_cast<unsigned int*>(FreeConsole) = 0xC3;
    AllocConsole();
    freopen("CONOUT$", "w", stdout);
    freopen("CONIN$", "r", stdin);
    SetWindowPos(GetConsoleWindow(), HWND_TOPMOST, 50, 20, 0, 0, SWP_DRAWFRAME | SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
    ShowWindow(GetConsoleWindow(), 1);
    SetConsoleTitleA("deaddlocust is a cutie"); // make sure it has good console title ;)
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    std::cout << "Getting Lua State...\n";
    rL = GetState(); // Get roblox state
    std::cout << "Setting context level...\n";
    *GetLevel(rL) = 7; // Set thread identity to level 7
    std::cout << "Initializing interpreter...\n";
    InitLBI(); // deserialize bytecode
    std::cout << "Registering custom functions...\n";
    Callcheck::Init(); // Initialize callcheck bypass
    registerfunc(rL, reinterpret_cast<int>(getgenv), "getgenv"); // register our custom functions
    registerfunc(rL, reinterpret_cast<int>(getrenv), "getrenv");
    registerfunc(rL, reinterpret_cast<int>(getsenv), "getsenv");
    registerfunc(rL, reinterpret_cast<int>(getreg), "getreg");
    registerfunc(rL, reinterpret_cast<int>(loadstring), "loadstring");
    std::cout << "\n";
    CreateThread(0, 0, Pipe, 0, 0, 0); // create pipe input
    std::cout << "Ready for execution!";
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        std::thread(Main).detach();
        break;
    }
    return TRUE;
}
