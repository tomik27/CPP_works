#include "Monstrum.h"

int Monstrum::getHp()
{
	return this->hp;
}

void Monstrum::setHp(int hp)
{
	this->hp = hp;
}

int Monstrum::getMaxHp()
{
	return this->maxhp;
}

void Monstrum::setMaxHp(int maxHp)
{
	this->maxhp = maxHp;
}
