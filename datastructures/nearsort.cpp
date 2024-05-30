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
  
    if (v[mid] == target) {
        return mid;
    }
    // Check the element just before the middle element
    if (mid > start && v[mid - 1] == target) {
        return mid - 1;
    }
    // Check the element just after the middle element
    if (mid < end && v[mid + 1] == target) {
        return mid + 1;
    }

    if (v[mid] > target) {
        return bin(v, start, mid - 2, target);
    }

    return bin(v, mid + 2, end, target);
}
int main()
{
  int i;
  vector<int> v{10, 3, 40, 20, 50, 80, 70};
  int start = 0;
  int target = 40;
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