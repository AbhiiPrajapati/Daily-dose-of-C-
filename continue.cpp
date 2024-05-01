#include <iostream>
using namespace std;
int main()
{
  for (int i = 0; i < 100; i++)
  {

    if (i % 2 == 0)
    {
      continue;
    }
    cout << "dj abss" << i << endl;
  }
  return 0;
}
