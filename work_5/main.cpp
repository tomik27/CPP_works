
#include "TelefonniSeznam.h"
using namespace Model;
using namespace Entity;
int main() {
	TelefonniSeznam* seznam = new TelefonniSeznam();
	Osoba osoba1(" c", "bla",1);
	Osoba osoba2(" sdc", "bla", 2);
	Osoba osoba3(" adc", "bla", 3);

	seznam->pridejOsobu(osoba1);
	seznam->pridejOsobu(osoba2);
	seznam->pridejOsobu(osoba3);
	seznam->~TelefonniSeznam();
	system(0);
}