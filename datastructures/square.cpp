#include <bits/stdc++.h>
using namespace std;
int bin(int start, int end, int num)
{
  int ans = -1;
  int mid = (start + end) / 2;
  if (start > end)
  {
    return -1;
  }
  if (mid * mid == num)
    return mid;
  if (mid * mid > num)
  {
    return bin(start, mid - 1, num);
  }
  else
  {
    int left = bin(mid + 1, end, num);
    ans = mid;
    if (left != -1)
    {
      return left;
    }
  }
  return ans;
}
int main()
{
  int num = 10;
  int res = bin(0, num, num);
  cout << "square is " << res << endl;
}