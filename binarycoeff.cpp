#include <iostream>
using namespace std;


// this is binary coefficient code



int fact(int n)
{
  int factorial = 1;
  for (int i = 2; i <= n; i++)
  {
    factorial *= i;
  }
  return factorial;
}

int main()
{
  int n, r, ans;

  cout
      << "enter n and r of nCr : ";
  cin >> n >> r;
  ans = (fact(n) / (fact(n - r) * fact(r)));
  cout << ans;
  return 0;
}