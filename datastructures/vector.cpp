#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> ans;
  int temp;
  for (int i = 0; i < n; i++)
  { 
    cin>>temp;
    ans.push_back(temp);
  }
  for(auto i:ans){
    cout<<i<<" ";
  }
  return 0;
}
