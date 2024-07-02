#include <bits/stdc++.h>
using namespace std;
main()
{
 int T, n, x;
 cin >> T;
 while (T--)
 {
  cin >> n;
  int j = 2, sum = 1;
  while (n / sum)
  {
   sum += j;
   if (n % sum == 0)
   {
    x = n / sum;
    break;
   }
   j *= 2;
  }
  cout << x << endl;
 }
}