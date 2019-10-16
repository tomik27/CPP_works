#include "PohyblivyObjekt.h"
#include <math.h>
# define M_PI           3.14159265358979323846  /* pi */
PohyblivyObjekt::PohyblivyObjekt(int id) :Objekt(id) {
	this->uhelNatoceni = 0;
}


double PohyblivyObjekt::getuhelNatoceni()const
{
	return this->uhelNatoceni;

}

void PohyblivyObjekt::setuhelNatoceni(double uhel)
{
	if (this->uhelNatoceni > 0 && this->uhelNatoceni < 2 * M_PI) {
		this->uhelNatoceni = uhelNatoceni;
	}
	else {
		throw "Chyba";
	}
}
