#include "ScenePlay.h"
#include "glc2d.h"
#include <stdio.h>

int ScenePlay::Init()
{
	m_Map.Init();
	m_Player.Init();
	m_Enemy.Init();

	return 0;
}

int ScenePlay::Update()
{
	m_Map.Update();
	m_Player.Update();
	m_Enemy.Update();

	return 0;
}

int ScenePlay::Render(CApplication& application)
{
	m_Map.Render();
	m_Player.Render();
	m_Enemy.Render();

	return 0;
}

int ScenePlay::Destroy()
{
	m_Map.Destroy();
	m_Player.Destroy();
	m_Enemy.Destroy();

	return 0;
}