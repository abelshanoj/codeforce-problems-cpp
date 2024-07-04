#include <bits/stdc++.h>
using namespace std;
main()
{
 int n, mx = INT_MIN, count = 0;
 string str, val;
 cin >> n;
 cin >> str;
 // unordered_set<string> se;
 //  unordered_map<string, int> mp;
 for (int i = 0; i < n - 1; i++)
 {
  count = 0;
  for (int j = 0; j < n - 1; j++)
  {
   if (str[i] == str[j] && str[i + 1] == str[j + 1])
    count++;
   if (mx < count)
   {
    mx = count;
    val.clear();
    val.push_back(str[j]);
    val.push_back(str[j + 1]);
   }
  }
 }
 cout << val;
}
