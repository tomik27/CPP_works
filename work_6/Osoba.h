#ifndef OSOBA_H
#define OSOBA_H
#include <string>
#include <iostream>
#include "Adresa.h"
#include "Datum.h"


struct Osoba {
private:
	std::string jmeno;
	std::string prijmeni;
	Adresa trvaleBydliste;
	Datum datumNarozeni;
public:
	Osoba(std::string jmeno, std::string prijmeni, Adresa trvaleBydliste, Datum datumNarozeni);
	Osoba();
	~Osoba();

	std::string getJmeno()const;
	std::string getPrijmeni()const;
	Adresa getTrvaleBydliste()const;
	Datum getDatumNarozeni()const;

	void setJmeno(std::string jmeno);
	void setPrijmeni(std::string prijmeni);
	void setTrvaleBydliste(Adresa trvaleBydliste);
	void setDatumNarozeni(Datum datumNarozeni);
	//friend std::ostream& operator<<(std::ostream& os, const Osoba& osoba);
	//friend std::istream& operator>>(std::istream& is,  Osoba& osoba);
};
 std::ostream& operator<<(std::ostream& os, const Osoba& osoba);
 std::istream& operator>>(std::istream& is, Osoba& osoba);
#endif // !OSOBA_H
