#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int num)
{
  for (int i = 2; i <= sqrt(num); i++)
  {
    if (num % i == 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int a, b;
  cout << "Enter Two Numbers to get prime numbers between them :  " << endl;
  cin >> a >> b;
  cout << "Prime Numbers between Two numbers are" << endl;
  for (int i = a; i <= b; i++)
  {
    if (isprime(i))
    {
      cout << i << endl;
    }
  }
  return 0;
}