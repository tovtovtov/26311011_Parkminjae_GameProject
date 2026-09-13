#pragma once
#include "CScene.h"
#include "CMap.h"
#include "CPlayer.h"
#include "CEnemy.h"


class ScenePlay : public CScene
{
public:
	int Init() override;
	int Update() override;
	int Render(CApplication& application) override;
	int Destroy() override;

protected:
	CMap m_Map;
	CPlayer m_Player;
	CEnemy m_Enemy;
};

