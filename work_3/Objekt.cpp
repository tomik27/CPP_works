#include "Objekt.h"
#include <iostream>
using namespace std;
//casna pozdni vazba, c++ pouze casna. Vyresime kdyz pred metodu dame virtual
//override(zapsat do potomka)- tato metoda je polymorfni, v predkovy musi metoda existovat
Objekt::Objekt(int id) {
	this->id = id;
	this->x = 0;
	this->y = 0;
}
Objekt::~Objekt() {
}
void Objekt::setX(double x) {
	this->x = x;
}
double Objekt::getX()const
{
	return this->x;
}

void Objekt::setY(double y)
{
	this->y = y;
}

double Objekt::getY()const
{
	return this->y;
}

double Objekt::getId()const
{
	return this->id;
}
