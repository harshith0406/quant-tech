#include <bits/stdc++.h>
using namespace std;

vector<int> bin(vector<vector<int>> &v, int start, int end, int target)
{
  if (start > end)
  {
    return {-1, -1};
  }

  int mid = (start + end) / 2;
  int row = mid / v[0].size();
  int col = mid % v[0].size();

  if (v[row][col] == target)
    return {row, col};
  else if (v[row][col] > target)
    return bin(v, start, mid - 1, target);
  else
    return bin(v, mid + 1, end, target);
}

int main()
{
  vector<vector<int>> v{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int start = 0;
  int end = v.size() * v[0].size() - 1; // corrected the end value
  int target = 0;

  vector<int> a = bin(v, start, end, target);

  if (a[0] == -1 || a[1] == -1)
  {
    cout << "ele not found!" << endl;
  }
  else
  {
    cout << "ele found! " << v[a[0]][a[1]] << endl; // corrected the output statement
  }

  return 0;
}
