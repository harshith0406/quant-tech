#include <bits/stdc++.h>
using namespace std;
int bin(vector<int> &v, int start, int end)
{
  int ans = -1;
  int mid = (start + end) / 2;
  if (start > end)
  {
    return -1;
  }
  if (v[mid] != mid + 1)
  {
    ans = mid;
    int left_result = bin(v, start, mid - 1);
    if (left_result != -1)
    {
      return left_result;
    }
  }
  else
  return bin(v, mid + 1, end);
  return ans;
}
int main()
{
  int i;
  vector<int> v{1, 2, 3, 4, 5, 7};
  int start = 0;
  int end = v.size() - 1;
  int res = bin(v, start, end);
  if (res == -1)
  {
    cout << "ele not found!" << endl;
  }
  else
  {
    cout << "ele found! " << res + 1 << endl;
  }
}