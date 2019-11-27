#include "Potrubi.h"

Potrubi::Potrubi(int pocetRadku, int pocetSloupcu)
{
	this->pocetRadku = pocetRadku;
	this->pocetSloupcu = pocetSloupcu;
	//prvky = new APotrubniPrvek**;
	this->prvky = new APotrubniPrvek ** [pocetRadku];
	for (int i = 0; i < pocetRadku; ++i)
		this->prvky[i] = new APotrubniPrvek*[pocetSloupcu];

	for (size_t i = 0; i < pocetRadku; i++)
	{
		for (size_t j = 0; j < pocetSloupcu; j++)
		{
			prvky[i][j] = nullptr;
		}
	}
}

const APotrubniPrvek* Potrubi::DejPrvek(int x, int y) const
{
	if(x<0||y<0)
	return nullptr;

	return this->prvky[x][ y];
}

bool Potrubi::JePotrubiOk() const
{
	bool stav;
	for (size_t i = 0; i < pocetRadku; i++)
	{
		for (size_t j = 0; j < pocetSloupcu; j++)
		{
			if (prvky[i][j] != nullptr) {
				stav = prvky[i][j]->JeKorektneZapojen(this);
				if (stav == false)
					return false;
			}
		}
	}
	return true;
}

void Potrubi::vlozPrvek(int x, int y, APotrubniPrvek* prvek)
{
	this->prvky[x][y] = prvek;
}

Potrubi::~Potrubi()
{

}


