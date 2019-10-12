#pragma once
#include "PohyblivyObjekt.h"
#ifndef DEBUG
class Monstrum :PohyblivyObjekt {
private:
	int hp;
	int maxhp;
public:
	int getHp();
	void setHp(int hp);
	int getMaxHp();
	void setMaxHp(int maxHp);
};
#endif // DEBUG