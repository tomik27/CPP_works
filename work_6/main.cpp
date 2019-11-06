#include "Osoba.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void uloz(Osoba* pole,int pocet) {
	ofstream out{};
	out.open("pokus.txt");
	for (size_t i = 0; i < pocet; i++)
	{
		out << pole[i];
	}
	delete[]pole;
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
//binanrni neni hotovy
//void ulozBin() {
//	ifstream f{ "soubor.dat",ios_base::out | ios_base::binary };
//	Osoba osoba{ 120,150,30 };
//	f.write(osoba.getJmeno(), osoba.getJmeno().length()+1);
//	
//	//write string
//	string s{ osoba.getJmeno() };
//	s.resize(100);
//	f.write(s.c_str(), s.size());
//	f.close();
//}
//Osoba* nactiBin() {
//	ifstream binarniSoubor{ "soubor.dat",ios_base::in | ios_base::binary };
//	Osoba* pole = new Osoba[3];
//	for (size_t i = 0; i < 3; i++)
//	{
//		//jedine po znacich
//		string s{};
//		char znak;
//		while (znak = f.get()) {
//			s += znak;
//		}
//		//string
//		char retezec[100];
//		f.read(retezec, sizeof retezec);
//		string s.{retezec, 100};
//		cout << "Nacteno: " << s << endl;
//		cin.get();
//
//	}
//	binarniSoubor.close();
//
//}
int main() {
	Osoba osoba1("Tomas", "Nikdo", Adresa("ulice","Mesto","psc"), Datum(1,1,1));
	Osoba osoba2("Ondra", "Nikdo", Adresa("ulice", "Mesto", "psc"), Datum(1, 1, 1));
	Osoba osoba3("Pa5ey", "Nikdo", Adresa("ulice", "Mesto", "psc"), Datum(1, 1, 1));
	Osoba* pole = new Osoba[3];

	cout << osoba1;
	pole[0] = osoba1;
	pole[1] = osoba2;
	pole[2] = osoba3;
	uloz(pole,3);
	Osoba* pole1 = nacti(3);

	return 0;
}