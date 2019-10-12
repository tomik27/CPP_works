#include "Hra.h"
#include "Monstrum.h"
//#include "PohyblivyObjekt.h"
#include "StatickyObjekt.h"


int main() {
	int* poleSracek = new int[10];
	for (size_t i = 0; i < 10; i++)
	{
		poleSracek[i] = 1;
	}

	Hra* hra = new Hra();
	//StatickyObjekt* o = new StatickyObjekt(1, 20.0, 30.0);
	//StatickyObjekt* o1 = new StatickyObjekt(1, 20.0, 30.0);
	Objekt* o4 = new Objekt(1, 0.0, 0.0);
	Objekt* o2 = new StatickyObjekt(TypPrekazky::MalaRostlina, 1);
	Objekt* o1 = new StatickyObjekt(TypPrekazky::Skala, 2);
	Objekt* o3 = new StatickyObjekt(TypPrekazky::Skala, 3);



	hra->vlozObjekt(o3);
	hra->vlozObjekt(o1);
	hra->vlozObjekt(o2);
	int* pole = hra->najdiIdStatickychObjektu(-2, 2, -2, 2);

	//Objekt* o5 = new Objekt(1, 0.0, 0.0);


}