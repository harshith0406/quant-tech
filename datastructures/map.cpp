#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> ans;
  int temp;
  map<int, int> hash;
  for (int i = 0; i < n; i++)
  {
    cin >> temp;
    ans.push_back(temp);
  }
  for (int i = 0; i < n; i++)
  {
    hash[ans[i]]++;
  }
  for (auto i : hash)
  {
    cout << i.first << " " << i.second << " " << endl;
  }
  return 0;
}
