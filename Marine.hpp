#pragma once
#include <iostream>

class Marine
{
private:
	int hp;
	int coordX, coordY;
	int damage;
	bool isDead;

public:
	Marine();
	Marine(int x, int y);

	int Attack();
	void BeAttacked(int damageEarn);
	void Move(int x, int y);
	void ShowStatus();
};