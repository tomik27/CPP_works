#include "Adresa.h"

Adresa::Adresa()
{
}

Adresa::Adresa(std::string _ulice, std::string _mesto, std::string _psc)
{
	this->_ulice = _ulice;
	this->_mesto = _mesto;
	this->_psc = _psc;

}

void Adresa::setUlice(std::string ulice)
{
	this->_ulice = ulice;
}

void Adresa::setMesto(std::string mesto)
{
	this->_mesto = mesto;
}

void Adresa::setPSC(std::string psc)
{
	this->_psc = psc;
}

std::string Adresa::getUlice() const
{
	return this->_ulice;
}

std::string Adresa::getMesto() const
{
	return this->_mesto;
}

std::string Adresa::getPSC() const
{
	return this->_psc;
}
 std::ostream& operator<<(std::ostream& os, const Adresa& adr) {
	 os << adr.getMesto()<<" "<< adr.getPSC()<<" "<< adr.getUlice();
	 return os;
}
 std::istream& operator>>(std::istream& is, Adresa& adr) {
	 std::string slovo="";
	 is >> slovo;
     adr.setMesto(slovo);
	 is >> slovo;
	 adr.setPSC(slovo);
	 is >> slovo;
	 adr.setUlice(slovo);
	 return is;
}