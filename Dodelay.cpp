#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, a, y, i, g;
	cout << "Введите скорость первого а зетем второго автомобиля.\n";
	cin >> a >> x;
	if (a*x > 0) {
		cout << "Введите расстояние между ними\n";
		cin >> y;
		if (y > 0) {
			cout << "Введите время\n";
			cin >> i;
			g = abs(a * i - x * i);
			cout << abs(y - g) << "\n";
		}
	}
	system("pause");
	return 0;
}
