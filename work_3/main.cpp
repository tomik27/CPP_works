#include "Hra.h"
#include "Monstrum.h"
//#include "PohyblivyObjekt.h"
#include "StatickyObjekt.h"
#include <iostream>

int main() {
	


	Hra* hra = new Hra();
	//StatickyObjekt* o = new StatickyObjekt(1, 20.0, 30.0);
	//StatickyObjekt* o1 = new StatickyObjekt(1, 20.0, 30.0);

	Objekt* o2 = new StatickyObjekt(TypPrekazky::MalaRostlina, 1);
	Objekt* o1 = new StatickyObjekt(TypPrekazky::Skala, 2);
	Objekt* o3 = new StatickyObjekt(TypPrekazky::Skala, 3);
	Objekt* o4 = new Objekt(1);
	Objekt* pohybObjekt = new PohyblivyObjekt(20);


	hra->vlozObjekt(o3);
	hra->vlozObjekt(o1);
	hra->vlozObjekt(o2);
	hra->vlozObjekt(pohybObjekt);
	int* pole = hra->najdiIdStatickychObjektu(-2, 2, -2, 2);
	for (size_t i = 0; i < 3; i++)
	{
		std::cout<<"id je " << pole[i];
	}
	 
	PohyblivyObjekt** pohybObjekty =hra->najdiPohybliveObjektyVOblasti(5.0, 5.0, 2.0, 0.0, 5.0);

	//Objekt* o5 = new Objekt(1, 0.0, 0.0);


}