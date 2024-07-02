#include <bits/stdc++.h>
using namespace std;
main()
{
 int socks, interval;
 cin >> socks >> interval;
 int days_left = 0, carry = 0;
 while (socks)
 {
  days_left += socks;
  carry += socks % interval;
  if (carry % interval)
   socks = socks / interval + carry;
 }
 cout << days_left << endl;
}