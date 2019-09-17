#include <iostream>
#include <cmath>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	float a1, b1, c1, a2, b2, c2, koef, darn, alg1, alg2, alg3, alg4;
	cout << "Введите значение первых двух коэффициентов А1 и В1 и C1, затем А2 и В2 и C2\n";
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	koef = pow(a1 * b2 - b1 * a2, -1);
	alg1 = b2;
	alg2 = -a2;
	alg3 = -b1;
	alg4 = a1;
	a1 = alg1 * c1 + alg3 * c2;
	a2 = alg2 * c1 + alg4 * c2;
	cout << "x = " << a1 << "\ny= " << a2;
	system("pause");
	return 0;
}
