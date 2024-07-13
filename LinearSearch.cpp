#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      return i; // Return the index when the element is found
    }
  }
  return -1; // Return -1 if the element is not found
}

int main()
{
  int n;
cout << " THIS IS LINEAR SEARCH PROGRAM "<<endl;
  cout << "Enter the Number of Elements You Want to Enter: ";
  cin >> n;
  cout << "Enter the Elements: " << endl;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int key;
  cout << "Enter the Element You Want to Search: " << endl;
  cin >> key;
  int result = LinearSearch(arr, n, key);
  if (result != -1)
  {
    cout << "Element is at index: " << result << endl;
  }
  else
  {
    cout << "Element's INDEX Not Found" << endl;
  }
  return 0;
}
