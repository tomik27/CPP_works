#include "Datum.h"
#include <string>
Datum::Datum()
{
}

Datum::Datum(int den, int mesic, int rok)
{
	this->_den = den;
	this->_mesic = mesic;
	this->_rok = rok;
}

void Datum::setDen(int den)
{
	this->_den = den;
}

void Datum::setMesic(int mesic)
{
	this->_mesic = mesic;
}

void Datum::setRok(int rok)
{
	this->_rok = rok;
}

int Datum::getDen() const
{
	return this->_den;
}

int Datum::getMesic() const
{
	return this->_mesic;
}

int Datum::getRok() const
{
	return this->_rok;
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
