#include <bits/stdc++.h>
using namespace std;
int bin(vector<int> v, int start, int end, int target)
{
  while (start <= end)
  {
    int mid = (start + end) / 2;
    if (v[mid] == target)
    {
      return mid;
    }
    else if (v[mid] > target)
    {
      return bin(v, 0, mid, target);
    }
    else
    {
      return bin(v, mid + 1, end, target);
    }
  }
}
int main()
{
  int i;
  vector<int> v{1, 2, 3, 4, 5};
  int start = 0;
  int target = 2;
  int end = v.size();
  int res = bin(v, start, end, target);
  if (res == -1)
  {
    cout << "ele not found!" << endl;
  }
  else
  {
    cout << "ele found!   " << res << endl;
  }
}