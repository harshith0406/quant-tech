#include <bits/stdc++.h>
using namespace std;
int main()
{
  int num1;
  int max = INT_MAX;
  int arr[10] = {1, 2, 3, 4, 5, -1, 2, 10, -4, -5};
  int i = 0;
  int j = 9;
  // while (i < j)
  // {
  //   cout << arr[i] << " ";
  //   i++;
  //   cout << arr[j] << " ";
  //   j--;
  // }
  while (i < j)
  {
    // arr[i] = arr[i] ^ arr[j];
    // arr[j] = arr[i] ^ arr[j];
    // arr[i] = arr[i] ^ arr[j];
    swap(arr[i], arr[j]);
    i++;
    j--;
  }
  for (int i = 0; i < 10; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
