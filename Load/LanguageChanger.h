#pragma once

#include "Includes.h"

namespace Lang
{
	string CANT_RENAME = "Cant to Rename Injector. Closing...";

	string STEAM_PATH_NOT_FOUNDED = "Steam path not Founded. Need to Run Steam.exe. Closing...";

	string SEARCH_STEAM = "Searching Steam.exe...";
	string STEAM_CLOSED = "Steam.exe Closes. Open Steam. Closing...";
	string STEAM_FOUNDED = "Steam.exe Found!";

	string SEARCH_CSGO = "Searching csgo.exe...";
	string CSGO_FOUNDED_FOR_INJECT = "csgo.exe Running, trying to Close...";
	string CANT_CLOSE_CSGO_FOR_INJECT = "Cant Close csgo.exe. Try to Close csgo.exe and Run Loader. Closing...";
	string CSGO_NOT_FOUNDED_FOR_INJECT = "Good, csgo.exe Closed, starting Inject!";
	string INJECT_ERROR = "Injecting Error. Closing...";
	string CANT_INJECT = "Cant Injecting. Closing...";
	string CAN_INJECT = "Injecting!";
	string CANT_FIND_DLL = "Cant Find Hack Dll. Closing...";
	string CAN_FIND_DLL = "Finded Hack Dll!";
	string DLL_IS = "Starting Inject ";
	string WAIT_CSGO = "Waiting csgo.exe...";
	string CSGO_FOUNDED = "csgo.exe Found!";


	void LoadRussian()
	{
		CANT_RENAME = "�� ���� ������������� ��������. ��������...";
		STEAM_PATH_NOT_FOUNDED = "����� ����� �� �������. ����� ��������� ����. ��������...";
		SEARCH_STEAM = "��� Steam.exe...";
		STEAM_CLOSED = "Steam.exe ������. �������� ����. ��������...";
		STEAM_FOUNDED = "Steam.exe ������!";
		SEARCH_CSGO = "��� csgo.exe...";
		CSGO_FOUNDED_FOR_INJECT = "csgo.exe ������, ������� �������...";
		CANT_CLOSE_CSGO_FOR_INJECT = "�� ������� ������� csgo.exe. ���������� ��������� ������ ������. ��������...";
		CSGO_NOT_FOUNDED_FOR_INJECT = "������, csgo.exe ������, ������� ������!";
		INJECT_ERROR = "������ ��� �������. ��������...";
		CANT_INJECT = "�� ��������� �����������. ��������...";
		CAN_INJECT = "����� ���������!";
		CANT_FIND_DLL = "�� ���� ����� ��� ����. ��������...";
		CAN_FIND_DLL = "��� ���� �������!";
		DLL_IS = "������� ������ ";
		WAIT_CSGO = "�������� csgo.exe...";
		CSGO_FOUNDED = "csgo.exe ������!";
	}

	string GetWinLanguage()
	{
		WCHAR wcBuffer[16];
		GetSystemDefaultLocaleName(wcBuffer, 16);

		return ws2s(wcBuffer);
	}


}