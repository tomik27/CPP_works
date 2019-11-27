#include "Osoba.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void uloz(Osoba* pole,int pocet,string soubor) {
	ofstream out{};
	out.open(soubor);
	for (size_t i = 0; i < pocet; i++)
	{
		out << pole[i];
	}
	out.close();
}
Osoba* nacti(int pocet){
	string slovo{};
	ifstream in{};
	Osoba* pole = new Osoba[pocet];
	in.open("pokus.txt");
	for (size_t i = 0; i < pocet; i++)
	{
		in >> pole[i];
	}
	return pole;
}
void methodWriteString(string text, ostream& f) {
	string s{ text };
	s.resize(100);
	f.write(s.c_str(), s.size());
}
void ulozBn(Osoba* pole, int pocet) {
	ofstream f{ "soubor.dat",ios_base::out | ios_base::binary };
	for (size_t i = 0; i < pocet; i++)
	{
		/*string s{ pole[i].getJmeno() };
	s.resize(100);
	f.write(s.c_str(), s.size());*/
		methodWriteString(pole[i].getJmeno(),f);
		methodWriteString(pole[i].getPrijmeni(), f);
		methodWriteString(pole[i].getTrvaleBydliste().getMesto(), f);
		methodWriteString(pole[i].getTrvaleBydliste().getPSC(), f);
		methodWriteString(pole[i].getTrvaleBydliste().getUlice(), f);
		methodWriteString(to_string(pole[i].getDatumNarozeni().getDen()), f);
		methodWriteString(to_string(pole[i].getDatumNarozeni().getMesic()), f);
		methodWriteString(to_string(pole[i].getDatumNarozeni().getRok()), f);
	}
	f.close();
}
string methodReadString(istream& f) {
	char retezec[100];
f.read(retezec, sizeof retezec);
string s{retezec, 100};
return s;
}
Osoba* nactiBn(int pocet) {
		ifstream f{ "soubor.dat",ios_base::in | ios_base::binary };
	Osoba* pole = new Osoba[pocet];
	for (size_t i = 0; i < pocet; i++)
	{

		string jmeno = methodReadString(f);
		string prijmeni = methodReadString(f);
		string ulice = methodReadString(f);
		string mesto = methodReadString(f);
		string psc = methodReadString(f); 
		int den = stoi(methodReadString(f));
		int mesic= stoi(methodReadString(f));
        int rok= stoi(methodReadString(f));
		//string prijmeni = methodReadString(f);
		//cin.get();
		Osoba osoba(jmeno, prijmeni, Adresa(ulice, mesto, psc), Datum(den, mesic, rok));
		pole[i] = osoba;
	}
	f.close();
	return pole;
}

int main() {
	Osoba osoba1("Tomas", "Nikdo", Adresa("ulice","Mesto","psc"), Datum(1,1,1));
	Osoba osoba2("Ondra", "Nikdo", Adresa("ulice", "Mesto", "psc"), Datum(1, 1, 1));
	Osoba osoba3("Pa5ey", "Nikdo", Adresa("ulice", "Mesto", "psc"), Datum(1, 1, 1));
	Osoba* pole = new Osoba[3];

	pole[0] = osoba1;
	pole[1] = osoba2;
	pole[2] = osoba3;
	osoba1.UlozTest();
	uloz(pole,3, "pokus.txt");
	//Osoba* pole1 = nacti(3);
	ulozBn(pole, 3);
	Osoba* pole1=nactiBn(3);

	return 0;
}