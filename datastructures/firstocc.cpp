#include <bits/stdc++.h>
using namespace std;
int bin(vector<int> &v, int start, int end, int target)
{
  int ans = -1;
  int mid = (start + end) / 2;
  if (start > end)
  {
    return -1;
  }
  if (v[mid] == target)
  {
    ans = bin(v, start, mid - 1, target);
    if (ans != -1)
    {
      return ans;
    }
    return mid;
  }
  else if (v[mid] < target)
  {
    return bin(v, mid + 1, end, target);
  }
  else
  {
    return bin(v, start, mid - 1, target);
  }
}
int main()
{
  int i;
  vector<int> v{1, 2, 2, 4, 5};
  int start = 0;
  int target = 2;
  int end = v.size() - 1;
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