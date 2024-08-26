#include <iostream>
using namespace std;
int main()
{

cout<<" -+:: THIS IS ARRAY PROGRAM ::+-  "<<endl;
  int n;
  cin >> n;
  int array[n];

  for (int i = 0; i < n; i++)
  {
    cin >> array[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << " " << array[i];
  }

  return 0;
}

//array program 