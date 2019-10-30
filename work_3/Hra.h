#pragma once
#pragma once
#include "PohyblivyObjekt.h"
#include "StatickyObjekt.h"
#ifndef DEBUG
class Hra {
private:
	Objekt** objekty;
public:
	Hra();
	~Hra();
	void vlozObjekt(Objekt* o);
	//Vloží objekt do pole.
	int* najdiIdStatickychObjektu(double xmin, double xmax, double ymin, double ymax)const;
	//Vrátí pole id všech statických objektù v zadaných souøadnicích.
	PohyblivyObjekt** najdiPohybliveObjektyVOblasti(double x, double y,
		double r)const;
	//Vrátí pole ukazelù na pohyblivé objekty v kruhové oblasti(S = [x, y],
		//radius = r).
	PohyblivyObjekt** najdiPohybliveObjektyVOblasti(double x, double y,
		double r, double umin, double umax)const;
	//	Viz pøedchozí, navíc kontrola úhlu natoèení.

};
#endif // DEBUG