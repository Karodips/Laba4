#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float a;
    cout << "Введите значение A\n";
    cin >> a;
    if (a < 0 || a > 360) {
        cout << "Вы не можете ввести значения ниже 0 или выше 360";
    }
    else {
        a = a/180;
        cout << a << "π"; 
        
    }

    return 0;
}
