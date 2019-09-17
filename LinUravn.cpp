#include <iostream>
#include <cmath>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	float a, b;
	cout << "Введите сначала значение А, а затем В\n";
	cin >> a >> b;
	if (a == 0) cout << "Ну мы же договаривались!";
	else a = b / a;
	cout << a << endl;
	system("pause");
	return 0;
}
