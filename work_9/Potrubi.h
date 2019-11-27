#pragma once
#include "IPotrubi.h"
#include <iostream>
struct Potrubi:IPotrubi {
	Potrubi(int pocetRadku, int pocetSloupcu);
	const APotrubniPrvek* DejPrvek(int x, int y) const;
	bool JePotrubiOk() const;
	void vlozPrvek(int x, int y, APotrubniPrvek* prvek);
	~Potrubi();
private:
	int pocetRadku;
	int pocetSloupcu;
	APotrubniPrvek*** prvky;
};