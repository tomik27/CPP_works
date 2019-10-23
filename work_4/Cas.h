#pragma once
#include "IComparable.h"
struct Cas: public IComparable {
private:
	int hodiny;
	int minuty;
	int sekundy;
public:
		Cas(int hodiny, int minuty, int sekundy);
		int compareTo(IComparable* obj) const override;
		virtual std::string toString() const override;
};
