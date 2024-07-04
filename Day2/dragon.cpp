#include <bits/stdc++.h>
using namespace std;
main()
{
 int T;
 cin >> T;
 while (T--)
 {
  int x, n, m;
  cin >> x >> n >> m;
  for (int i = 0; i < n && x / 2 + 10 < x; i++)
  {
   x = x / 2 + 10;
  }
  cout << (x <= m * 10 ? "YES" : "NO") << endl;
 }
}