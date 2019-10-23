#include "IComparable.h"
#include "Cas.h"
#include<time.h>
using namespace std;
void SeraditPole(IComparable** pole, int velikostPole) {
	for (size_t j = 0; j < velikostPole; j++)
	{
		for (size_t i = 0; i < velikostPole - 1; i++)
		{
			//Cas** poleCas = dynamic_cast<Cas**>(pole);
			if (pole[i]->compareTo(pole[i + 1]) == 1) {
				IComparable* pom = pole[i];
				pole[i] = pole[i + 1];
				pole[i + 1] = pom;
			}
		}
	}
}
int main(int argc, char** args) {
	srand(time(nullptr));

	Cas** poleCasu = new Cas * [10];
	for (size_t i = 0; i < 10; i++)
	{
		poleCasu[i] = new Cas(rand() % 24, rand() % 60, rand() % 60);
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << poleCasu[i]->toString() << endl;
	}
	SeraditPole((IComparable**)poleCasu, 10);
	cout << "serazene" << endl;
	SeraditPole((IComparable**)poleCasu, 10);
	for (size_t i = 0; i < 10; i++)
	{
		cout << poleCasu[i]->toString() << endl;
	}
	for (size_t i = 0; i < 10; i++)
		delete poleCasu[i];

	delete[] poleCasu;

}


//throw new - nepouzivat
//try{}catch(const exception$ ex){delete ex;}  catch(...) throw std::logic_error
//globalni prostor nema nazev - ::