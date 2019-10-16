#pragma once

//Point(int aX, int aY) : X(aX), Y(aY) {
//	std::cout << "Call parametric construktor" << std::endl;
//}
#ifndef DEBUG
class Objekt {
private:
	int id;
	double x;
	double y;

public:
	Objekt(int id);
	virtual ~Objekt();
	void setX(double x);
	double getX()const;

	void setY(double y);
	double getY()const;

	double getId()const;

};
#endif // DEBUG