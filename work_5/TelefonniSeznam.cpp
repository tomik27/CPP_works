#include "TelefonniSeznam.h"
#include <string>
#include <iostream>
#include <exception>
//#include  <stdexcept>
Model::TelefonniSeznam::~TelefonniSeznam()
{
	while (this->_zacatek != nullptr)
	{
		PrvekSeznam* pom = this->_zacatek;
		delete this->_zacatek;
		this->_zacatek = pom->dalsi;
	}
}

Model::TelefonniSeznam::TelefonniSeznam()
{
	this->_zacatek = nullptr;
}

void Model::TelefonniSeznam::pridejOsobu(Entity::Osoba o)
{
	if (o.getJmeno().empty()||o.getID()<0) {
		throw std::invalid_argument("id je zaporne");
	}
	PrvekSeznam* novyPrvek=new PrvekSeznam(o);
	if (this->_zacatek == nullptr) {
		this->_zacatek=novyPrvek ;
	}
	else {
		PrvekSeznam* pom = this->_zacatek;
		while (pom->dalsi!=nullptr)
		{
			pom = pom->dalsi;
		}
		pom->dalsi = novyPrvek;
	}
}

std::string Model::TelefonniSeznam::najdiTelefon(std::string jmeno) const
{
	if (jmeno.empty()) {
		throw std::invalid_argument("Jmeno je prazdne");
	}
	PrvekSeznam* prvek=this->_zacatek;
	while (prvek!=nullptr)
	{
		if (prvek->data.getJmeno().compare(jmeno) == 0) {
			return "Telefon je " + prvek->data.getTelefon();
		}
	}
	throw std::invalid_argument("Data nenalezena");
}

std::string Model::TelefonniSeznam::najdiTelefon(int id) const
{
	if (id< 0) {
		throw std::invalid_argument("Jmeno je prazdne nebo je id zaporne");
	}
	PrvekSeznam* prvek = this->_zacatek;
	while (prvek != nullptr)
	{
		if (prvek->data.getID() == id) {
			return "Telefon je " + prvek->data.getTelefon();
		}
	}
	throw std::invalid_argument("Data nenalezena");
}

//Model::(Entity::Osoba data)
//{
//	this->dalsi = nullptr;
//	this->data = data;
//}
//
//Model::TelefonniSeznam::PrvekSeznam::PrvekSeznam(Entity::Osoba data)
//{
//}
//
//Model::PrvekSeznam* Model::PrvekSeznam::getDalsi()
//{
//	return this->~PrvekSeznam;
//}
//
//void Model::PrvekSeznam::setDalsi(PrvekSeznam osoba)
//{
//	this->dalsi = osoba;
//}

Model::TelefonniSeznam::PrvekSeznam::PrvekSeznam(Entity::Osoba data)
{
	this->data = data;
}

Model::TelefonniSeznam::PrvekSeznam::~PrvekSeznam()
{
}
