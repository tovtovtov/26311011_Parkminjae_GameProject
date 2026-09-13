#pragma once

class CEnemy
{
public:
	int Init();
	int Update();
	int Render();
	int Destroy();

protected:
	int m_TxNoraml = -1; // 老馆 各
	int m_TxTanker = -1; // 攀目 各
};

