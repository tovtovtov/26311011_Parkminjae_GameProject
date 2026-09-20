#include "SceneBegin.h"
#include "glc2d.h"
#include "ScenePlay.h"
#include "CApplication.h"

#define GAME_START_BUTTON_RECT mouseX >= 330 && mouseX <= 700 && mouseY >= 330 && mouseY <= 370
#define EXIT_BUTTON_RECT mouseX >= 330 && mouseX <= 700 && mouseY >= 390 && mouseY <= 430

extern CApplication g_App;

int SceneBegin::Init()
{
	m_BackGroundTexture = g2_TextureLoad("Texture/TitleBackGround.png");
	m_BackGroundMusic = g2_SoundLoad("Sound/bgm.mp3");

	return 0;
}

int SceneBegin::Update()
{
	int mouseX = g2_GetMouseX();
	int mouseY = g2_GetMouseY();

	if (g2_GetMouseEvent(0) == EINPUT_DOWN) // 마우스 왼쪽 버튼 클릭
	{
		if (GAME_START_BUTTON_RECT) // "GAME START" 버튼 영역
		{
			g_App.ChangeScene(new ScenePlay()); // 게임 플레이 씬으로 전환
		}
		else if (EXIT_BUTTON_RECT) // "EXIT" 버튼 영역
		{
			g2_DestroyWin(); // 게임 종료
		}
	}
	return 0;
}

int SceneBegin::Render(CApplication& application)
{
	const GameResource& Resource = application.GetResource();

	// 배경 음악 재생
	g2_SoundPlay(m_BackGroundMusic, true);

	g2_Draw2D(m_BackGroundTexture, {});

	// 화면에 영역(left, top, right, bottom)
	g2_FontDrawText(Resource.fontTitle, { 330, 180, 800, 240 }, 0xFFFFE08A, "STONE AGE");

	g2_FontDrawText(Resource.fontMenu, { 330, 330, 700, 370 }, 0xffffffff, "GAME START");

	g2_FontDrawText(Resource.fontMenu, { 330, 390, 700, 430 }, 0xffffffff, "EXIT");

	return 0;
}

int SceneBegin::Destroy()
{
	if (m_BackGroundTexture >= 0)
	{
		g2_TextureRelease(m_BackGroundTexture);
		m_BackGroundTexture = -1;
	}

	return 0;
}	
