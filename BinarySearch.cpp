#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
  int s = 0;
  int e = n - 1; // Corrected boundary
  while (s <= e)
  {
    int mid = s + (e - s) / 2; // To prevent overflow
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[mid] > key)
    {
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
  }
  return -1;
}

int main()
{
  int n;

cout<< "BINARY SEARCH PROGRAM"<<endl;
  cout << "Enter the Number of Elements You Want to Enter:: ";
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
  int result = BinarySearch(arr, n, key);
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
