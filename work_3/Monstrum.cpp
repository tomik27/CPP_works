#include "Monstrum.h"

Monstrum::Monstrum(int id):PohyblivyObjekt(id)
{
	this->hp = 0;
	this->maxhp = 0;
}

int Monstrum::getHp()const
{
	return this->hp;
}

void Monstrum::setHp(int hp)
{
	this->hp = hp;
}

int Monstrum::getMaxHp()const
{
	return this->maxhp;
}

void Monstrum::setMaxHp(int maxHp)
{
	this->maxhp = maxHp;
}
