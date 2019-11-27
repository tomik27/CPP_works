#ifndef Ipotrubi
#define Ipotrubi


struct APotrubniPrvek;
struct IPotrubi {
	virtual ~IPotrubi() { }
	virtual const APotrubniPrvek* DejPrvek(int x, int y) const = 0;
	virtual bool JePotrubiOk() const = 0;
};
struct APotrubniPrvek {
public:
	virtual ~APotrubniPrvek() { }
	virtual bool JeKorektneZapojen(const IPotrubi* potrubi) const = 0;
	int _x;
	int _y;
};

#endif // Ipotrubi
//struct Potrubi:IPotrubi {
//private:
//	APotrubniPrvek*** pole;
//	int pocetSloupcu;
//	int pocetRadku;
//public:
//	Potrubi();
//	const APotrubniPrvek* DejPrvek(int x, int y) const;
//	bool JePotrubiOk() const;
//	void vlozPrvek(int x,int y,APotrubniPrvek* prvek);
//};
//struct VychodZapadPotrubi:public APotrubniPrvek {
//public:
//	VychodZapadPotrubi(int x, int y);
//		bool JeKorektneZapojen(const IPotrubi* potrubi)const override;
//};
//
//struct VychodZapadPotrubi :APotrubniPrvek {
//public:
//	VychodZapadPotrubi(int x, int y);
//	bool JeKorektneZapojen(const IPotrubi* potrubi)const override;
//};
//struct SeverJihPotrubi :APotrubniPrvek {
//	SeverJihPotrubi(int x, int y);
//	bool JeKorektneZapojen(const IPotrubi* potrubi)const override;
//};
//struct SeverJihVychodZapadPotrubi :APotrubniPrvek {
//	SeverJihVychodZapadPotrubi(int x, int y);
//	bool JeKorektneZapojen(const IPotrubi* potrubi)const override;
//};
//struct JihVychodZapadPotrubi :APotrubniPrvek {
//	JihVychodZapadPotrubi(int x, int y);
//	bool JeKorektneZapojen(const IPotrubi* potrubi)const override;
//};

