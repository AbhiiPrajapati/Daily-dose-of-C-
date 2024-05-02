#include <iostream>
using namespace std;

int fact(int n)
{
  int s = 1;
  for (int i = n; i >= 1; i--)
  {
    s = s * i;
  }
  cout << s;
}

int main()
{
  int n;
  cout << "You want Factotrial of : ";
  cin >> n;
  fact(n);
  return 0;
}