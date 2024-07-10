#include <bits/stdc++.h>
using namespace std;
main()
{
 int n, b, d, a, c = 0, s = 0;
 for (cin >> n >> b >> d; cin >> a;)
 {
  a > b ?: s += a;
  // cout << s << endl;
  s > d ? s = 0, c++ : 0;
  // cout << c << endl;
 }
 cout << c;
}