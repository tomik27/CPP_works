#include "Adresa.h"

Adresa::Adresa()
{
}

Adresa::Adresa(std::string ulice, std::string mesto, std::string psc)
{
	this->ulice = ulice;
	this->mesto = mesto;
	this->psc = psc;

}

void Adresa::setUlice(std::string ulice)
{
	this->ulice = ulice;
}

void Adresa::setMesto(std::string mesto)
{
	this->mesto = mesto;
}

void Adresa::setPSC(std::string psc)
{
	this->psc = psc;
}

std::string Adresa::getUlice() const
{
	return ulice;
}

std::string Adresa::getMesto() const
{
	return mesto;
}

std::string Adresa::getPSC() const
{
	return psc;
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