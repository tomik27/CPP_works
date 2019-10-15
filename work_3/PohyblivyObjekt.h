#pragma once
#include "Objekt.h"

#ifndef DEBUG
class PohyblivyObjekt :public Objekt {
private:
	double uhelNatoceni;
public:

	double getuhelNatoceni();
	void setuhelNatoceni(double uhel);
	PohyblivyObjekt(int id, double x, double y, double uhel);
};
#endif // DEBUG