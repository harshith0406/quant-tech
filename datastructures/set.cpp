#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> ans;
  int temp;
  set<int> st;
  for (int i = 0; i < n; i++)
  {
    cin >> temp;
    ans.push_back(temp);
  }
  for (auto i : ans)
  {
    st.insert(i);
  }
  for (auto i : st)
  {
    cout << i << "  ";
  }

  return 0;
}
