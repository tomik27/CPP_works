#include "PrvkyPotrubi.h"
#include <iostream>
bool PrvekMinus::JeKorektneZapojen(const IPotrubi* potrubi) const
{
	if (potrubi->DejPrvek(_x - 1, _y) != nullptr && (potrubi->DejPrvek(_x + 1, _y)!=nullptr)) {
		return true;
 }
	return false;
}

bool PrvekO::JeKorektneZapojen(const IPotrubi* potrubi) const
{
	return true;
}

bool PrvekT::JeKorektneZapojen(const IPotrubi* potrubi) const
{
	if (potrubi->DejPrvek(_x, _y-1) != nullptr && (potrubi->DejPrvek(_x + 1, _y) != nullptr)&& potrubi->DejPrvek(_x - 1, _y) != nullptr) 
		return true;

	return false;
}

bool PrvekKriz::JeKorektneZapojen(const IPotrubi* potrubi) const
{
	if (potrubi->DejPrvek(_x, _y-1) != nullptr && (potrubi->DejPrvek(_x, _y+1) != nullptr) && (potrubi->DejPrvek(_x + 1, _y) != nullptr)&& potrubi->DejPrvek(_x - 1, _y) != nullptr)
		return true;

	return false;
}

bool PrvekI::JeKorektneZapojen(const IPotrubi* potrubi) const
{
	if (potrubi->DejPrvek(_x, _y - 1) != nullptr && potrubi->DejPrvek(_x, _y + 1) != nullptr) {
		return true;
	}
	return false;
}
