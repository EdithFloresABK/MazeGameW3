#pragma once
#include "PlacableActor.h"
#include "Rock.h"

class Key;

class Player : public PlacableActor
{
public:
	Player();

	//inventory interface or composition
	bool HasKey();
	bool HasKey(ActorColor color);
	void PickupKey(Key* key);
	void UseKey();
	void DropKey();
	Key* GetKey() { return m_pCurrentKey; }

	bool HasRock();
	void PickupRock(Rock* rock);
	void DropRock();
	Rock* GetRock() { return m_pCurrentRock; }

	void AddMoney(int money) { m_money += money; }
	int GetMoney() { return m_money; }

	//ILiveable
	//create a function OnLoseLive or ColllideWithEnemy
	int GetLives() { return m_lives; }
	void DecrementLives() { m_lives--; }

	virtual ActorType GetType() override { return ActorType::Player; }
	virtual void Draw() override;
private:
	Key* m_pCurrentKey;
	Rock* m_pCurrentRock;
	int m_money;
	int m_lives;
};
