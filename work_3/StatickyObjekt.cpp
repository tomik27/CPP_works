#include "StatickyObjekt.h"

StatickyObjekt::StatickyObjekt(TypPrekazky typ, int id) :Objekt(id) {
	this->typPrekazky = typ;
}

TypPrekazky StatickyObjekt::getTypPrekazky()
{
	return this->typPrekazky;
}
