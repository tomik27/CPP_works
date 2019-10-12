#pragma once
#include "Objekt.h"

#ifndef DEBUG
class PohyblivyObjekt :public Objekt {
private:
	double uhelNatoceni;
public:

	double getuhelNatoceni();
	void setuhelNatoceni(double uhel);

};
#endif // DEBUG