#include <iostream>

using namespace std;
int main()
{
  double x, a, y,i;
  cout << "Enter weight of your candies\n";
  cin >> a;
  cout << "Enter their price\n";
  cin >> x;
  cout << "How much candies do you want?\n";
  cin >> y;
  i = x/a;
  cout << i << " " << i*y;
  return 0;
}
