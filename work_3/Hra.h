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
	//Vlo�� objekt do pole.
	int* najdiIdStatickychObjektu(double xmin, double xmax, double ymin, double ymax);
	//Vr�t� pole id v�ech statick�ch objekt� v zadan�ch sou�adnic�ch.
	PohyblivyObjekt** najdiPohybliveObjektyVOblasti(double x, double y,
		double r);
	//Vr�t� pole ukazel� na pohybliv� objekty v kruhov� oblasti(S = [x, y],
		//radius = r).
	PohyblivyObjekt** najdiPohybliveObjektyVOblasti(double x, double y,
		double r, double umin, double umax);
	//	Viz p�edchoz�, nav�c kontrola �hlu nato�en�.

};
#endif // DEBUG