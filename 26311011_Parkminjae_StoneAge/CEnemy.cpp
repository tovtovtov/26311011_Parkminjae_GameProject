#include "CEnemy.h"
#include "glc2d.h"

int CEnemy::Init()
{
	m_TxNoraml = g2_TextureLoad("Texture/mob_normal.png");
	m_TxTanker = g2_TextureLoad("Texture/mob_tanker.png");

	return 0;
}

int CEnemy::Update()
{



	return 0;
}

int CEnemy::Render()
{
	VEC2 pos1 = { 600, 400 };
	VEC2 pos2 = { 400, 250 };

	g2_Draw2D(m_TxNoraml, {}, &pos1);
	g2_Draw2D(m_TxTanker, {}, &pos2);

	return 0;
}

int CEnemy::Destroy()
{
	g2_TextureRelease(m_TxNoraml);
	g2_TextureRelease(m_TxTanker);

	return 0;
}