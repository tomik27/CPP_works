#ifndef DATUM_H
#define DATUM_H
#include <iostream>
struct Datum {
private:
	int den;
	int mesic;
	int rok;
public:
	Datum();
	Datum(int den,int mesic,int rok);
	void setDen(int den);
	void setMesic(int mesic);
	void setRok(int rok);

	int getDen()const;
	int getMesic()const;
	int getRok()const;

	//friend std::ostream& operator<<(std::ostream& os, const Datum& adr);
	//friend std::istream& operator>>(std::istream& is, Datum& adr);
};
 std::ostream& operator<<(std::ostream& os, const Datum& adr);
 std::istream& operator>>(std::istream& is, Datum& adr);
#endif // !DATUM_H
