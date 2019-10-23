#ifndef IObject_H
#define IObject_H
#include <string>
#include<iostream>
#include "IComparable.h"

struct IObject {
public:
	virtual ~IObject();
	virtual std::string toString()const=0;	
};
#endif //IObject_H 
