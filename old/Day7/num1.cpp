#include <bits/stdc++.h>
using namespace std;
main()
{
 int T, n;
 cin >> T;
 while (T--)
 {
  cin >> n;
  /*Our aim is to find whether the given number n is a sum of 2020 and 2021
  --> if it is a sum of only 2020 then the quotient obtained when n is divided by 2020 will belongs to R and remainder will always be 0
  ie, q>r
  --->if it is a sum of only 2021 then the quotient and remainder obtained when n is divided/% by 2020 will belongs to R (eg: 2021/2020 q=1 and r=1) hence q=r
  --->if it is a sum of 2020 and 2021 then also q>=r*/
  int q = n / 2020;
  int r = n % 2020;
  if (r <= q)
   cout << "YES" << endl;
  else
   cout << "NO" << endl;
 }
}