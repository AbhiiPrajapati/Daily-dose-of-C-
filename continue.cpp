#include <iostream>
using namespace std;
int main()
{

cout<<"this program is showing the use of Continue"<<endl;
  for (int i = 0; i < 100; i++)
  {

    if (i % 2 == 0)
    {
      continue;
    }
    cout << "continue hora hai" << i << endl;
  }
  return 0;
}
