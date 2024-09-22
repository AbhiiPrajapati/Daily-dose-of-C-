#include <iostream>
using namespace std;

void fib(int n)
{
  int temp1 = 0;
  int temp2 = 1;
  int total;
  for (int i = 1; i <= n; i++)
  {
    total = temp1 + temp2;
    cout << total << endl;
    temp1 = temp2;
    temp2 = total;
  }

  return;
}

int main()
{

cout<<"program showing Fibonacci series : "<<endl;
  int n;
  cout << " Enter the n " ;
  cin >> n;
  fib(n);
  return 0;
}