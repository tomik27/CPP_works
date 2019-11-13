#include "Datum.h"
#include <string>
Datum::Datum()
{
}

Datum::Datum(int den, int mesic, int rok)
{
	this->den = den;
	this->mesic = mesic;
	this->rok = rok;
}

void Datum::setDen(int den)
{
	this->den = den;
}

void Datum::setMesic(int mesic)
{
	this->mesic = mesic;
}

void Datum::setRok(int rok)
{
	this->rok = rok;
}

int Datum::getDen() const
{
	return den;
}

int Datum::getMesic() const
{
	return mesic;
}

int Datum::getRok() const
{
	return rok;
}

 std::ostream& operator<<(std::ostream& os, const Datum& adr) {
	 os << adr.getDen() << " " << adr.getMesic() << " " << adr.getRok();
	 return os;
}
 std::istream& operator>>(std::istream& is, Datum& adr) {
	 int cislo =0;
	 is >> cislo;
	 adr.setDen(cislo);
	 is >> cislo;
	 adr.setMesic(cislo);
	 is >> cislo;
	 adr.setRok(cislo);
	 return is;
}
