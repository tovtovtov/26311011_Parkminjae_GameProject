#pragma once

enum class PlayerType
{
	Melee,
	Ranged,
	Shaman
};

enum class ItemType
{
	Attack,
	Speed,
	AtackSpeed,
};

class CPlayer
{
public:
	int Init();
	int Update();
	int Render();
	int Destroy();
	
	void TakeDamage(int m_CurHp, int m_damage);			// 플레이어가 데미지를 입었을 때 처리
	void Heal(int m_CurHp, int m_heal);					// 플레이어가 회복했을 때 처리
	bool isDead(int m_CurHp);							// 플레이어가 사망했을 때 처리	
	void MovePlayer(); 									// 플레이어 이동 처리
	void UpgradeStats();								// 플레이어 능력치 업그레이드 처리
	virtual void AttackPlayer();						// 플레이어 공격 처리
	
private:
	int m_MaxHp = 100;						// 총 체력
	int m_CurHp = 0;						// 현재 체력

	int m_Damage = 0;						// 데미지
	int m_Heal = 0;							// 회복량

	int m_Speed = 0;						// 이동 속도
	int m_Attack = 0;						// 공격력
	int m_AttackSpeed = 0;					// 공격 속도

	VEC2 m_Size = { 50, 50 };				// 플레이어 크기
	VEC2 m_Pos = { 512, 340 };				// 플레이어 위치

protected:
	int m_MeleeAttackChar_tx = -1;			// 근접 공격 캐릭터 텍스처
	int m_RangedAttackChar_tx = -1;			// 원거리 공격 캐릭터 텍스처
	int m_Shaman_tx = -1;					// 샤먼 텍스처
};

