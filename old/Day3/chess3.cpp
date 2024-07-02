#include <bits/stdc++.h>
using namespace std;
main()
{
 int T;
 cin >> T;
 while (T--)
 {
  int a, b, c;
  cin >> a >> b >> c;
  cout << ((a + b + c) % 2 ? -1 : min(a + b, (a + b + c) / 2)) << endl;
 }
}