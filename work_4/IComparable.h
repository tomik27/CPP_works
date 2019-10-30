#ifndef IComparable_H
#define IComparable_H
#include<iostream>
#include "IObject.h"
struct IComparable :public IObject {
public:
	virtual	int compareTo(IComparable* obj) const = 0;
	virtual ~IComparable();
};


#endif // !IComparable_H