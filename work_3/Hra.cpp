#include "Hra.h"

int pocetObjektu = 0;
Hra::Hra()
{
	objekty = new Objekt * [20];
}

void Hra::vlozObjekt(Objekt* o)
{
	objekty[pocetObjektu] = o;
	pocetObjektu++;
}

int* Hra::najdiIdStatickychObjektu(double xmin, double xmax, double ymin, double ymax)
{
	int pocetNalezenych = 0;
	int* poleId = new int[pocetObjektu];
	//static int poleId[10];
	for (size_t i = 0; i < pocetObjektu; i++)
	{
		if (StatickyObjekt* v = dynamic_cast<StatickyObjekt*>(objekty[i])) {
			if ((objekty[i]->getX() > xmin&& objekty[i]->getX() < xmax) && (objekty[i]->getY() > ymin&& objekty[i]->getY() < ymax)) {
				poleId[pocetNalezenych] = v->getId();
				pocetNalezenych++;
			}
		}
	}
	int* result = new int[pocetNalezenych];
	for (size_t i = 0; i < pocetNalezenych; i++)
	{
		result[i] = poleId[i];
	}
	delete[] poleId;

	return result;
}

PohyblivyObjekt** Hra::najdiPohybliveObjektyVOblasti(double x, double y, double r)
{

	int index = 0;
	PohyblivyObjekt** polePO = new PohyblivyObjekt * [pocetObjektu];
	for (size_t i = 0; i < pocetObjektu; i++)
	{
		if (PohyblivyObjekt* v = dynamic_cast<PohyblivyObjekt*>(objekty[i])) {
			// old was safely casted to NewType
			if (((objekty[i]->getX() < (x + r)) && (objekty[i]->getY() < (y + r)))) {
				polePO[index] = v;
				index++;
			}
		}
	}
	return polePO;
}

PohyblivyObjekt** Hra::najdiPohybliveObjektyVOblasti(double x, double y, double r, double umin, double umax)
{

	int index = 0;
	PohyblivyObjekt** polePO = new PohyblivyObjekt * [pocetObjektu];
	for (size_t i = 0; i < pocetObjektu; i++)
	{
		if (PohyblivyObjekt* v = dynamic_cast<PohyblivyObjekt*>(objekty[i])) {
			// old was safely casted to NewType
			if (((objekty[i]->getX() < (x + r)) && (objekty[i]->getY() < (y + r))) && (umin< objekty[i]->getY() && umax>objekty[i]->getX())) {
				polePO[index] = v;
				index++;
			}
		}
	}
	return polePO;
}
