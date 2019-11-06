#include "Osoba.h"

Osoba::Osoba(std::string _jmeno, std::string _prijmeni, Adresa _trvaleBydliste, Datum _datumNarozeni) {
	this->_datumNarozeni = _datumNarozeni;
	this->_trvaleBydliste = _trvaleBydliste;
	this->_jmeno = _jmeno;
	this->_prijmeni = _prijmeni;
}
Osoba::Osoba() {

}
Osoba::~Osoba() {

}

std::string Osoba::getJmeno()const {
	return this->_jmeno;
}
std::string Osoba::getPrijmeni()const {
	return this->_prijmeni;
}
Adresa Osoba::getTrvaleBydliste()const {
	return this->_trvaleBydliste;
}
Datum Osoba::getDatumNarozeni()const {
	return this->_datumNarozeni;
}

void Osoba::setJmeno(std::string jmeno) {
	this->_jmeno = jmeno;
}
void Osoba::setPrijmeni(std::string prijmeni) {
	this->_prijmeni = prijmeni;
}
void Osoba::setTrvaleBydliste(Adresa _trvaleBydliste) {
	this->_trvaleBydliste = _trvaleBydliste;
}
void Osoba::setDatumNarozeni(Datum _datumNarozeni) {
	this->_datumNarozeni = _datumNarozeni;
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