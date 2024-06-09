#include <bits/stdc++.h>
using namespace std;
int bin(vector<int> &v, int start, int end)
{
  int ans = -1;
  int mid = (start + end) / 2;
  if(start==end) return start;
  if (start > end)
  {
    return -1;
  }
  if (mid + 1 < end && v[mid] > v[mid + 1])
  {
    return mid;
  }
  if (mid - 1 > start && v[mid - 1] > v[mid])
  {
    return mid - 1;
  }
  if (v[start] > v[mid])
  {
    return bin(v, start, mid - 1);
  }
  return bin(v, mid + 1, end);
}
int main()
{
  int i;
  vector<int> v{ 2, 4, 6, 8};
  int start = 0;
  int end = v.size() - 1;
  int res = bin(v, start, end);
  if (res == -1)
  {
    cout << "ele not found!" << endl;
  }
  else
  {
    cout << "ele found! " << v[res]<< endl;
  }
}