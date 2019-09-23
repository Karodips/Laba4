#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, a, y, i, g;
	cout << "Введите скорость первого а зетем второго автомобиля.\n";
	cin >> a >> x;
		cout << "Введите расстояние между ними\n";
		cin >> y;
		if (y >= 0) {
			cout << "Введите время\n";
			cin >> i;
			if (i >= 0) {
				g = abs(a * i - x * i);
				cout << (y + g) << "\n";
			}
			else {
				cout << "Время не может быть отрицательным\n";
			}
		}
		else {
			cout << "Расстояние не может быть отрицательным\n";
		}
	system("pause");
	return 0;
}
