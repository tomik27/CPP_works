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
	void vlozObjekt(Objekt* o);
	//Vloží objekt do pole.
	int* najdiIdStatickychObjektu(double xmin, double xmax, double ymin, double ymax);
	//Vrátí pole id všech statických objektù v zadaných souøadnicích.
	PohyblivyObjekt** najdiPohybliveObjektyVOblasti(double x, double y,
		double r);
	//Vrátí pole ukazelù na pohyblivé objekty v kruhové oblasti(S = [x, y],
		//radius = r).
	PohyblivyObjekt** najdiPohybliveObjektyVOblasti(double x, double y,
		double r, double umin, double umax);
	//	Viz pøedchozí, navíc kontrola úhlu natoèení.

};
#endif // DEBUG