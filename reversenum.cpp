#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter the number ; " << endl;
  cin >> n;

  int lastdigit = 0;
  int reverse = 0;
  while (n > 0)
  {
    lastdigit = n % 10;
    reverse = reverse * 10 + lastdigit;
    n = n / 10;
  }
  cout << "reversed number : " << reverse;
  return 0;
}