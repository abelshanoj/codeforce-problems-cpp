#include <bits/stdc++.h>
using namespace std;
main()
{
 int T;
 cin >> T;
 while (T--)
 {
  int n;
  string a;
  cin >> n >> a;

  cout << (count(a.begin(), a.end(), 'U') % 2 ? "YES" : "NO") << endl;
 }
}