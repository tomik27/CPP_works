#ifndef ADRESA_H
#define ADRESA_H
#include <string>
#include <iostream>
struct Adresa {
private:
	std::string ulice;
	std::string mesto;
	std::string psc;
public:
	Adresa();
	Adresa(std::string ulice, std::string mesto, std::string psc);
	void setUlice(std::string ulice);
	void setMesto(std::string mesto);
	void setPSC(std::string psc);

	std::string getUlice()const;
	std::string getMesto()const;
	std::string getPSC()const;


};
std::ostream& operator<<(std::ostream& os, const Adresa& adr);
std::istream& operator>>(std::istream& is, Adresa& adr);
#endif // !ADRESA_H
