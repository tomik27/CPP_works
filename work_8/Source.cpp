#include "Matrix.h"
int main() {
	Matrix<int> mat1 = Matrix<int>(2, 2);
	mat1.nastav(0, 0,1);
	mat1.nastav(0, 1, 2);
	mat1.nastav(1, 0, 3);
	mat1.nastav(1, 1, 4);
	mat1.Vypis();
	Matrix<int> mat2 = Matrix<int>(2, 2);
	int array[] = { 0,1,2,3 };

	mat2.NastavZ(array);
	mat2.Vypis();
	Matrix<int> vysl = 	mat1.Soucet(mat2);
	vysl.Vypis();
	Matrix<int> vysl2 =	mat1.Soucin(mat2);
	vysl2.Vypis();
	
	Matrix<double> vysl3 = mat1.Pretypuj<double>();
	//vysl2.Vypis();
	mat2.Dej(1, 1);

	Matrix<int> m{ 3,3 };
	int jednodpole[] = { 0,1,2,3,4,5,6,7,8 };
	m.NastavZ(jednodpole);

	Matrix<int> mt = m.Transpozice();
	Matrix<int> mmt = m.Soucin(mt);

	Matrix<double> mmt_d = mmt.Pretypuj<double>();

	Matrix<double> n_d{ 3,3 };
	double jednodpole_d[] = { 4.5,5,0,2,-0.5,7,1.5,9,6 };
	n_d.NastavZ(jednodpole_d);

	Matrix<double> mmtn_d = mmt_d.Soucin(n_d);

	Matrix<int> r = mmtn_d.Pretypuj<int>();

	Matrix<int> t{ 3,3 };
	int tpole[] = { 85,225,236,292,819,866,499,1413,1496 };
	t.NastavZ(tpole);

	std::cout << "r==t ? " << (r.JeShodna(t) ? "true" : "false") << std::endl;
	return 0;
}