#include "PohyblivyObjekt.h"

PohyblivyObjekt::PohyblivyObjekt(int id,double x,double y, double uhel) :Objekt(id, x, y) {
	this->uhelNatoceni = uhel;
}


double PohyblivyObjekt::getuhelNatoceni()
{
	return this->uhelNatoceni;
}

void PohyblivyObjekt::setuhelNatoceni(double uhel)
{
	this->uhelNatoceni = uhelNatoceni;
}
