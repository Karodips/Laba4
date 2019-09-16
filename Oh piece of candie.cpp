#include <iostream>

using namespace std;
int main()
{
	double x, a, y, i;
	cout << "Enter weight of your candies\n";
	cin >> a;
	if (a > 0) {
		cout << "Enter their price\n";
		cin >> x;
		if (x > 0) {
			cout << "How much candies do you want?\n";
			cin >> y;
			if (y >= 0) {
				i = x / a;
				cout << i << " " << i * y << "\n";
			}
			else {
				cout << "incorrect amount";
			}

		}
		else if (x == 0)
		{
			cout << "0 0" << "\n";
		}
		else {
			cout << "incorrect amount";
		}

	}
	else {
		cout << "incorrect amount";
	}
	system("pause");
	return 0;
}
