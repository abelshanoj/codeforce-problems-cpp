#include <bits/stdc++.h>
using namespace std;
main()
{
 int n, mx = INT_MIN;
 string str, val;
 cin >> n;
 cin >> str;
 unordered_map<string, int> mp;
 for (int i = 0; i < n - 1; i++)
 {
  mp[str.substr(i, 2)]++;
 }
 for (auto &f : mp)
 {
  if (f.second > mx)
  {
   mx = f.second;
   val = f.first;
  }
 }
 cout << val;
}