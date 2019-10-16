#pragma once
#include "PohyblivyObjekt.h"
#ifndef DEBUG
class Monstrum :PohyblivyObjekt {
private:
	int hp;
	int maxhp;
public:
	Monstrum(int id);
	int getHp()const;
	void setHp(int hp);
	int getMaxHp()const;
	void setMaxHp(int maxHp);
};
#endif // DEBUG