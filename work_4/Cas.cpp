#include "Cas.h"
#include <iostream>
using namespace std;

Cas::Cas(int hodiny, int minuty, int sekundy) {
	this->hodiny = hodiny;
	this->minuty = minuty;
	this->sekundy = sekundy;
}

int Cas::compareTo(IComparable* obj) const
{
	Cas* cas = dynamic_cast<Cas*>(obj);
	if (this->hodiny > cas->hodiny) {
		return 1;
	}
	else if (this->hodiny < cas->hodiny) {
		return -1;
	}
	if (this->minuty > cas->minuty) {
		return 1;
	}
	else if (this->minuty < cas->minuty) {
		return -1;
	}
	if (this->sekundy > cas->sekundy) {
		return 1;
	}else if(this->sekundy<cas->sekundy){
		return - 1;
	}

	return 0;
}
std::string Cas::toString() const
{
	return std::to_string(this->hodiny) + ':' + std::to_string(this->minuty) + ':' + std::to_string(this->sekundy);
}


