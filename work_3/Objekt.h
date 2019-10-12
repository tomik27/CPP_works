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
	Objekt(int id, double x, double y);
	virtual ~Objekt();
	void setX(double x);
	double getX();

	void setY(double y);
	double getY();

	double getId();

};
#endif // DEBUG