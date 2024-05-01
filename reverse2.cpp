#include <iostream>
#include <cstring>
using namespace std;

void reverse2(char s[])
{
  int l = strlen(s);
  for (int i = 0; i < l / 2; i++)
  {
    swap(s[i], s[l - i - 1]);
  }
}

int main()
{
  char s[200];
  cout << "enter the string to be reversed : ";
  cin.getline(s, 40);
  cout << "original string : " << s << endl;
  reverse2(s);
  cout << "reversed String is : " << s << endl;
  return 0;
}