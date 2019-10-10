#include "Uctenka.h"
#include <iostream>
using namespace std;

Uctenka::Uctenka() {

}
Uctenka::Uctenka(double castka, double dph) {
	Uctenka::cisloUctenky;
	this->castka = castka;
	this->dph = dph;
}
void Uctenka::setCastka(double cislo) {
	this->castka = cislo;
}

double	Uctenka::getCastka() {
	return this->castka;
}
double Uctenka::getDph() {
	return this->dph;
}
void Uctenka::setDph(double cislo) {
	this->dph = cislo;
}
int Uctenka::getCisloUctenky() {
	return this->cisloUctenky;
}
void Uctenka::setCisloUctenky(int cislo) {
	this->cisloUctenky = cislo;
}
