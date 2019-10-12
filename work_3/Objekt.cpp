#include "Objekt.h"
#include <iostream>
using namespace std;

Objekt::Objekt(int id, double x, double y) {
	this->id = id;
	this->x = x;
	this->y = y;
}
Objekt::~Objekt() {
}
void Objekt::setX(double x) {
	this->x = x;
}
double Objekt::getX()
{
	return this->x;
}

void Objekt::setY(double y)
{
	this->y = y;
}

double Objekt::getY()
{
	return this->y;
}

double Objekt::getId()
{
	return this->id;
}
