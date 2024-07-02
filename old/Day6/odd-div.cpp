#include <bits/stdc++.h>
using namespace std;
main()
{
 int T;
 cin >> T;
 while (T--)
 {
  int i = 0;
  long long x;
  cin >> x;
  while (x > 1)
  {
   if (x % 2)
   {
    i = 1;
    break;
   }
   x /= 2;
  }
  if (i == 1)
   cout << "YES" << endl;
  else
   cout << "NO" << endl;
 }
}