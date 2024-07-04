#include <bits/stdc++.h>
using namespace std;
main()
{
 int T;
 cin >> T;
 while (T--)
 {
  int n, a, b;
  cin >> n >> a >> b;
  for (int i = 0; i < n; i++)
  {
   cout << char(97 + i % b);
  }
  cout << endl;
 }
}