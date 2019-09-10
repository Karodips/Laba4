#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float a;
    cout << "Введите значение A\n";
    cin >> a;
    a = a/180;
    cout << a << "π";
    return 0;
}
