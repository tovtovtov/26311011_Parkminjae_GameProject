#pragma once

class CPlayer
{
public:
	int Init();
	int Update();
	int Render();
	int Destroy();

protected:
	int m_TxPlayer = -1;
};

