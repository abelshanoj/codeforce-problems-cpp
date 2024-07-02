#include <bits/stdc++.h>
using namespace std;
main()
{
 int T;
 cin >> T;
 long long n;
 // vector<pair<int, int>> v;
 while (T--)
 {
  cin >> n;
  int a = 0;
  while (n % 6 == 0)
  {
   a++;
   n = n / 6;
  }
  while (n % 3 == 0)
  {
   a += 2;
   n = n / 3;
  }
  // a = n == 1 ? a : INT_MAX;
  //  v.push_back(make_pair(a, b));
  cout << (n == 1 ? a : -1) << endl;
 }
 // for (const auto &i : v)
 // {
 //  cout << i.first << '\t' << i.second << endl;
 //  cout << (max(i.first, i.second) == i.second ? (i.second - i.first) + i.second : -1) << endl;
 // }
}
