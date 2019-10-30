#include "Hra.h"
#include <iostream>
int pocetObjektu = 0;
int velikostPole = 10;
Hra::Hra()
{
	
	objekty = new Objekt * [velikostPole];
}

Hra::~Hra()
{
	for (size_t i = 0; i < velikostPole; i++)
	{
		delete	objekty[i];
	}
	delete[] objekty;
	std::cout << "Pamet" << (_CrtDumpMemoryLeaks() ? "Ano" : "NE") << std:: endl;
	system("pause");
}

void Hra::vlozObjekt(Objekt* o)
{
	if (pocetObjektu == velikostPole) {
		velikostPole += 10;
		Objekt** np = new Objekt * [velikostPole];

		for (size_t i = 0; i < velikostPole; i++)
		{
			np[i] = objekty[i];
		}
		delete[] objekty;
		objekty = np;
	}
	objekty[pocetObjektu] = o;
	pocetObjektu++;
}

int* Hra::najdiIdStatickychObjektu(double xmin, double xmax, double ymin, double ymax)const
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

PohyblivyObjekt** Hra::najdiPohybliveObjektyVOblasti(double x, double y, double r)const
{

	int index = 0;
	PohyblivyObjekt** polePO = new PohyblivyObjekt * [pocetObjektu];
	for (size_t i = 0; i < pocetObjektu; i++)
	{
		if (PohyblivyObjekt* v = dynamic_cast<PohyblivyObjekt*>(objekty[i])) {
			// old was safely casted to NewType
			if (((objekty[i]->getX() < (x + r)) && (objekty[i]->getY() < (y + r)))) {
				polePO[index] = v;
				++index;
			}
		}
	}
	return polePO;
}

PohyblivyObjekt** Hra::najdiPohybliveObjektyVOblasti(double x, double y, double r, double umin, double umax)const
{

	int index = 0;
	PohyblivyObjekt** polePO = new PohyblivyObjekt * [pocetObjektu];
	for (size_t i = 0; i < pocetObjektu; i++)
	{
		if (PohyblivyObjekt* v = dynamic_cast<PohyblivyObjekt*>(objekty[i])) {
			// old was safely casted to NewType
			if (((objekty[i]->getX() < (x + r)) && (objekty[i]->getY() < (y + r))) && (umin <= v->getuhelNatoceni() && umax > v->getuhelNatoceni())) {
				polePO[index] = v;
				index++;
			}
		}
	}
	return polePO;
}
