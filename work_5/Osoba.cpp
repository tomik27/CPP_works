#include "Osoba.h"
using namespace Entity;
Entity::Osoba::~Osoba()
{
}


Entity::Osoba::Osoba()
{
}

Entity::Osoba::Osoba(std::string jmeno, std::string telefon, int id)
{
	this->jmeno = jmeno;
	this->id = id;
	this->telefon = telefon;
}

std::string Entity::Osoba::getJmeno() const
{
	return this->jmeno;
}


std::string Entity::Osoba::getTelefon() const
{
	return this->telefon;
}

int Entity::Osoba::getID() const
{
	return this->id;
}

void Entity::Osoba::setJmeno(std::string jmeno)
{
	this->jmeno = jmeno;
}

void Entity::Osoba::setTelefon(std::string tel)
{
	this->telefon = tel;
}

void Entity::Osoba::setID(int id)
{
	this->id = id;
}
