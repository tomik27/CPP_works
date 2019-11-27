#pragma once
#include "IPotrubi.h"
struct PrvekMinus :APotrubniPrvek {
	PrvekMinus(int x, int y) { _x = x, _y = y; }
 virtual bool JeKorektneZapojen(const IPotrubi* potrubi)const override;
};

struct PrvekO :APotrubniPrvek {
	PrvekO(int x, int y) { _x = x, _y = y; }
	virtual bool JeKorektneZapojen(const IPotrubi* potrubi)const override;
};
struct PrvekT :APotrubniPrvek {
	PrvekT(int x, int y) { _x = x, _y = y; }
	virtual bool JeKorektneZapojen(const IPotrubi* potrubi)const override;
};
struct PrvekKriz :APotrubniPrvek {
	PrvekKriz(int x, int y) { _x = x, _y = y; }
	virtual bool JeKorektneZapojen(const IPotrubi* potrubi)const override;
};
struct PrvekI :APotrubniPrvek {
	PrvekI(int x, int y) { _x = x, _y = y; }
	virtual bool JeKorektneZapojen(const IPotrubi* potrubi)const override;
};