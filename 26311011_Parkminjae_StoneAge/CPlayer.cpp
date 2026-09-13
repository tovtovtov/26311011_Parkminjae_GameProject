#include "CPlayer.h"
#include "glc2d.h"

int CPlayer::Init()
{
	m_TxPlayer = g2_TextureLoad("Texture/player.png");


	return 0;
}

int CPlayer::Update()
{



	return 0;
}

int CPlayer::Render()
{
	VEC2 pos = { 512, 340 };
	g2_Draw2D(m_TxPlayer, {}, &pos);


	return 0;
}

int CPlayer::Destroy()
{
	g2_TextureRelease(m_TxPlayer);


	return 0;
}