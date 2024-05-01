#include <iostream>
using namespace std;
int main()
{
  int a, b;
  cin >> a;
  cin >> b;
  int i;
  for (i = 2; i < b; i++)
  {
    if (b % i != 0)
    {
      cout << i << endl;
    }
  }
  if (i >= a && i <= b)
  {
    cout << "Prime Number is " << i;
  }

  return 0;
}