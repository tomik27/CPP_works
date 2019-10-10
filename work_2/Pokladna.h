#pragma once
#include "Uctenka.h"
#ifndef DEBUG
class Pokladna {
private:
	int pocetVydanychUctenek;
	static	int  citacId;
	Uctenka* uctenky;

public:
	Pokladna();
	~Pokladna();
	Uctenka& vystavUctenku(double castka, double dph);
	Uctenka& dejUctenka(int uctenka);
	double dejCastku() const;
	double dejCastkuVcDph() const;
};
#endif // DEBUG


