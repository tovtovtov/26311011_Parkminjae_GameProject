#include "CPlayer.h"
#include "glc2d.h"

int CPlayer::Init()
{
	m_MeleeAttackChar_tx = g2_TextureLoad("Texture/player.png");


	return 0;
}

int CPlayer::Update()
{



	return 0;
}

int CPlayer::Render()
{
	VEC2 pos = { 512, 340 };
	g2_Draw2D(m_MeleeAttackChar_tx, {}, &pos);


	return 0;
}

int CPlayer::Destroy()
{
	g2_TextureRelease(m_MeleeAttackChar_tx);


	return 0;
}

void CPlayer::TakeDamage(int m_CurHp, int m_damage)
{
	m_CurHp -= m_damage;
	if (m_CurHp < 0)
	{
		m_CurHp = 0;
	}
}


