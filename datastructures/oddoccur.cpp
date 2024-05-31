#include <bits/stdc++.h>
using namespace std;
int bin(vector<int> &v, int start, int end)
{
  // int ans = -1;
  // if (start == end)
  // {
  //   return start;
  // }
  // if (start > end)
  // {
  //   return -1;
  // }
  // int mid = start + (end - start) / 2;

  // if (mid >= 0 && mid % 2 == 0)
  // {
  //   if (v[mid] != v[mid + 1])
  //   {
  //     ans = mid;
  //     int left_result = bin(v, start, mid - 1);
  //     if (left_result != -1)
  //     {
  //       return left_result;
  //     }
  //   }
  //   else
  //   {
  //     return bin(v, mid + 2, end);
  //   }
  // }
  // else
  // {
  //   if (mid < end && v[mid] != v[mid - 1])
  //   {
  //     return bin(v, mid + 1, end);
  //   }
  //   else
  //   {
  //     ans = mid;
  //     int left_result = bin(v, start, mid - 2);
  //     if (left_result != -1)
  //     {
  //       return left_result;
  //     }
  //   }
  // }
  // return ans;
  if (start == end)
  {
    return start;
  }

  int mid = start + (end - start) / 2;

  // Ensure mid is even for comparison with mid+1
  if (mid % 2 == 1)
  {
    mid--;
  }

  // If mid and mid+1 are the same, the single element is on the right
  if (v[mid] == v[mid + 1])
    return bin(v, mid + 2, end);
  else
    return bin(v, start, mid);
}
int main()
{
  int i;
  vector<int> v{2, 2, 1, 4, 4, 5, 5};
  int start = 0;
  int end = v.size() - 1;
  int res = bin(v, start, end);
  if (res == -1)
  {
    cout << "ele not found!" << endl;
  }
  else
  {
    cout << "ele found! " << v[res] << endl;
  }
}