
#include <iostream>
#include<sstream>
#include<string>
#include "Potrubi.h"
#include "PrvkyPotrubi.h"
#include <fstream>
using namespace std;
  
Potrubi* nacti(string soubor) {
	Potrubi* potrubi=nullptr;
	int velikost = 0;
	int sloupec = 6;
	ifstream in;
	string radek;
	char znak;
	in.open(soubor);
	if (in.is_open()) {
		std::getline(in, radek);
		velikost = stoi(radek);
		potrubi= new Potrubi(velikost+1, sloupec+1);
	
			for (size_t i = 0; i < velikost; i++)
			{
			//	while (getline(in, radek)) {
				getline(in, radek);
				for (size_t j = 0; j < radek.size(); j++)
				{
					APotrubniPrvek* prvek= nullptr;
					znak = radek.at(j);
					switch (znak) {
					case '-':
						prvek = new PrvekMinus(i, j);
						break;
					case '+':
						prvek = new PrvekKriz(i, j);
						break;
					case 'T':
						prvek = new PrvekT(i, j);
						break;
					case 'I':
						prvek = new PrvekI(i, j);
						break;
					case 'O':
						prvek = new PrvekO(i, j);
						break;
					}
					potrubi->vlozPrvek(i, j, prvek);
				}
		}
	}
	return potrubi;
}

			int main(){
			Potrubi* potrubi=nacti("soubor1.txt");
		bool stav =	potrubi->JePotrubiOk();

		Potrubi* potrubi2 = nacti("soubor2.txt");
		bool stav2 = potrubi2->JePotrubiOk();
		return 0;
}