#include <iostream>
#include <cstring> // for strlen
using namespace std;

void reverseString(char s[])
{
  int len = strlen(s);
  for (int i = 0; i < len / 2; i++)
  {
    swap(s[i], s[len - i - 1]);
  }
}

int main()
{
  char str[40];
  cin >> str;
  cout << "Original string : " << str << endl;
  reverseString(str);
  cout << "Reversed string : " << str << endl;

  return 0;
}
