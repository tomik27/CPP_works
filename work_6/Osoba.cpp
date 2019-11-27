#include "Osoba.h"
#include <fstream>
#include<iostream>
Osoba::Osoba(std::string _jmeno, std::string _prijmeni, Adresa _trvaleBydliste, Datum _datumNarozeni) {
	this->datumNarozeni = _datumNarozeni;
	this->trvaleBydliste = _trvaleBydliste;
	this->jmeno = _jmeno;
	this->prijmeni = _prijmeni;
}
Osoba::Osoba() {

}
Osoba::~Osoba() {

}

std::string Osoba::getJmeno()const {
	return jmeno;
}
std::string Osoba::getPrijmeni()const {
	return  prijmeni;
}
Adresa Osoba::getTrvaleBydliste()const {
	return  trvaleBydliste;
}
Datum Osoba::getDatumNarozeni()const {
	return  datumNarozeni;
}

void Osoba::UlozTest()
{
	std::ofstream out{};
	out.open("pokus.txt");
	out << this;
	out.close();
}

void Osoba::setJmeno(std::string jmeno) {
	this->jmeno = jmeno;
}
void Osoba::setPrijmeni(std::string prijmeni) {
	this->prijmeni = prijmeni;
}
void Osoba::setTrvaleBydliste(Adresa _trvaleBydliste) {
	this->trvaleBydliste = _trvaleBydliste;
}
void Osoba::setDatumNarozeni(Datum _datumNarozeni) {
	this->datumNarozeni = _datumNarozeni;
}
//std::ostream& operator<<(std::ostream& os, const Osoba& osoba)
//{
//	os << osoba._jmeno <<" "<< osoba._prijmeni << " "<< osoba._trvaleBydliste << std::endl<<osoba._datumNarozeni<<std::endl;
//	return os;
//}
std::ostream& operator<<(std::ostream& os, const Osoba& p)
{

	os << p.getJmeno() << " " << p.getPrijmeni() << std::endl << p.getTrvaleBydliste() << std::endl << p.getDatumNarozeni() << std::endl;
	return os;
}
std::istream& operator>>(std::istream& is,  Osoba& osoba)
{
	std::string slovo = {};
	is >> slovo;
	 osoba.setJmeno(slovo);
	 is >> slovo;
	 osoba.setPrijmeni(slovo);
	 Adresa adr;
	 is >> adr;
	 osoba.setTrvaleBydliste(adr);
	 Datum dat;
	 is >> dat;
	 osoba.setDatumNarozeni(dat);
	return is;
}