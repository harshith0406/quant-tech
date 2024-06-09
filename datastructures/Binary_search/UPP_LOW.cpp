#include <bits/stdc++.h>
using namespace std;
int main()
{
  int i;
  vector<int> v{1, 2, 2, 4, 5};
  size_t target = 2;
  auto up = upper_bound(v.begin(), v.end(), target);
  auto low = lower_bound(v.begin(), v.end(), target);
  if (up != v.end())
  {
    cout << "element upper bound" << (up - v.begin()) << endl;
  }
  else
  {
    cout << "element out";
  }
  if (low != v.end())
  {
    cout << "element lower bound" << (low - v.begin()) << endl;
  }
  else
  {
    cout << "element out";
  }
}