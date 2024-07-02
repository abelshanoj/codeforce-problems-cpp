#include <bits/stdc++.h>
using namespace std;
main()
{
 int n;
 cin >> n;
 string s;
 while (n--)
 {
  cin >> s;
  cout << (s.size() > 10 ? s[0] + to_string(s.size() - 2) + s[s.size() - 1] : s) << endl;
 }
}