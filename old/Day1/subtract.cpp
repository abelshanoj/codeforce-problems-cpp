#include <bits/stdc++.h>
using namespace std;
main()
{
 int n, k;
 cin >> n, cin >> k;
 while (k)
 {
  if (n % 10 != 0)
   n--;
  else
   n /= 10;
  k--;
 }
 cout << n;
}