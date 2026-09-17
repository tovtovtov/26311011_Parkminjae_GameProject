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
	
	g2_Draw2D(m_MeleeAttackChar_tx, {},&m_Pos, &m_Size);


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

void CPlayer::Heal(int m_CurHp, int m_heal)
{
	m_CurHp += m_heal;
	if (m_CurHp > this->m_MaxHp)
	{
		m_CurHp = this->m_MaxHp;
	}
}

bool CPlayer::isDead(int m_CurHp)
{
	if (m_CurHp <= 0)
	{
		return true;
	}
}

void CPlayer::MovePlayer()
{
	g2_GetKeyboard
}


