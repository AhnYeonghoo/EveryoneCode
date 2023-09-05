#pragma once
#include <string.h>
#include <iostream>

class PhotonCannon
{
private:
	int hp, shield;
	int x, y;
	int damage;

public:
	PhotonCannon(int x, int y);
	PhotonCannon(const PhotonCannon& pc);
	
	void ShowStatus();
};

PhotonCannon::PhotonCannon(const PhotonCannon& pc)
{
	std::cout << "복사 생성자 호출 !" << std::endl;
	this->hp = pc.hp;
	this->shield = pc.shield;
	this->x = pc.x;
	this->y = pc.y;
	this->damage = pc.damage;
}

PhotonCannon::PhotonCannon(int x, int y)
{
	std::cout << "생성자 호출!" << std::endl;
	this->hp = this->shield = 100;
	this->x = x;
	this->y = y;
	this->damage = 20;
}

void PhotonCannon::ShowStatus()
{
	std::cout << "Photon Cannon" << std::endl;
	std::cout << " Location : ( " << this->x << " , "
		<< this->y << " ) " << std::endl;
	std::cout << " HP: " << this->hp << std::endl;
}

