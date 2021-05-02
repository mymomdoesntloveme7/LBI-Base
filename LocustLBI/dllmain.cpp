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
    rL = GetState();
    std::cout << "Setting context level...\n";
    *GetLevel(rL) = 8; // There's literally no point to set it to 8 i just wanted to
    std::cout << "Initializing interpreter...\n";
    InitLBI(); 
    std::cout << "Registering custom functions...\n";
    Callcheck::Init(); // Initialize callcheck bypass
    registerfunc(rL, reinterpret_cast<int>(getgenv), "getgenv"); // register our custom functions
    registerfunc(rL, reinterpret_cast<int>(getrenv), "getrenv");
    registerfunc(rL, reinterpret_cast<int>(getsenv), "getsenv");
    registerfunc(rL, reinterpret_cast<int>(getreg), "getreg");
    std::cout << "\n";
    while (true)
    {
        std::cout << ">";
        std::string input;
        std::getline(std::cin, input);
        Execute(rL, input);
    }
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
