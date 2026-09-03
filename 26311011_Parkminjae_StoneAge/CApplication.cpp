#include "CApplication.h"
#include "glc2d.h"
#include <stdio.h>

extern CApplication g_App;


int RenderApp()
{
	g_App.Render();
	return 0;
}

int UpdateApp()
{
	g_App.Update();
	return 0;
}

int CApplication::Init()
{
	
	g2_InitSdk();

	g2_SetFrameMove(UpdateApp);
	g2_SetRender(RenderApp);
	
	// window 생성.
	g2_CreateWin(m_winPos.x, m_winPos.y, m_winSize.cx, m_winSize.cy, m_winName.c_str());


	// 그림을 프로그램에 로딩
	m_tx = g2_TextureLoad("Texture/gamestart.png");

	return 0;
}

int CApplication::Update()
{
	printf("Update...\n\n");
	return 0;
}

int CApplication::Render()
{
	printf("Render...\n\n");
	return 0;
}

int CApplication::Destroy()
{
	// 텍스처 해제
	g2_TextureRelease(m_tx);

	// 윈도우 해제
	g2_DestroyWin();

	return 0;
}

int CApplication::InitSdk()
{
	return 0;
}

