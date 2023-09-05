#include "Marine.hpp"

Marine::Marine()
{
	this->hp = 50;
	this->coordX = this->coordY = 0;
	this->damage = 5;
	this->isDead = false;
}

Marine::Marine(int x, int y)
{
	this->coordX = x;
	this->coordY = y;
	this->hp = 50;
	this->damage = 5;
	this->isDead = false;
}

void Marine::Move(int x, int y)
{
	this->coordX = x;
	this->coordY = y;
}

int Marine::Attack()
{
	return this->damage;
}

void Marine::BeAttacked(int damageEarn)
{
	this->hp -= damageEarn;
	if (hp <= 0) this->isDead = true;
}

void Marine::ShowStatus()
{
	std::cout << "*** Marine *** " << std::endl;
	std::cout << " Location : ( " << this->coordX << " , " << this->coordY
		<< " ) " << std::endl;
	std::cout << " HP : " << this->hp << std::endl;
}

int mainMarine()
{

	return 0;
}