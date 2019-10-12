#include "StatickyObjekt.h"

StatickyObjekt::StatickyObjekt(TypPrekazky typ, int id) :Objekt(id, 0.0, 0.0) {
	this->typPrekazky = typ;
}

TypPrekazky StatickyObjekt::getTypPrekazky()
{
	return this->typPrekazky;
}
