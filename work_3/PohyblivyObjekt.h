#pragma once
#include "Objekt.h"

#ifndef DEBUG
class PohyblivyObjekt :public Objekt {
private:
	double uhelNatoceni;
public:

	double getuhelNatoceni()const;
	void setuhelNatoceni(double uhel);
	PohyblivyObjekt(int id);
};
#endif // DEBUG