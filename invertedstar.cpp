#include <iostream>
using namespace std;
main()
{
  int n;
cout << "THIS IS A INVERTED STAR PROGRAM"<<endl;
  cout << " Enter N : ";
  cin >> n;
  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}