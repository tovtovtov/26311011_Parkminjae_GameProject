#pragma once
#include <Windows.h>
#include <string>



class CApplication
{
public:
	int Init();
	int Update();
	int Render();
	int Destroy();
	

protected:
	int InitSdk();

protected:
	// windows
	POINT m_winPos { 100, 100 };
	SIZE m_winSize { 800, 600 };

	std::string m_winName = "StoneAge"; // 윈도우 창 제목

	int m_tx = -1;
};

