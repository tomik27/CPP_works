#ifndef OSOBA_H
#define OSOBA_H
#include <string>
#include <iostream>
namespace Entity {
	class Osoba {
	private:
		std::string jmeno;
		std::string telefon;
		int id;
	public:
		~Osoba();
		Osoba();
		Osoba(std::string jmeno, std::string telefon, int id);
		std::string getJmeno()const;
		std::string getTelefon()const;
		int getID()const;

		void setJmeno(std::string jmeno);
		void setTelefon(std::string tel);
		void setID(int id);


	};
}

#endif OSOBA_H