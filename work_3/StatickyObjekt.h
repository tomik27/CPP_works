#pragma once
#include "Objekt.h"

#ifndef DEBUG
enum TypPrekazky { Skala, MalaRostlina, VelkaRostlina };
class StatickyObjekt :public Objekt {
private:
	TypPrekazky typPrekazky;


public:
	StatickyObjekt(TypPrekazky typ, int id);

	TypPrekazky getTypPrekazky();

};
#endif // DEBUG