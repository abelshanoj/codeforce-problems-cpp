#include <bits/stdc++.h>
using namespace std;
main()
{
 bool flag = 0;
 int num;
 cin >> num;
 while (num)
 {
  int digit = num % 10;
  if (digit == 1)
   flag = 1;
  else if (digit == 4)
  {
   if ((num / 10) % 10 == 1 || ((num / 10) % 10 == 4 && (num / 100) % 10 == 1))
    flag = 1;
   else
   {
    flag = 0;
    break;
   }
  }
  else
  {
   flag = 0;
   break;
  }
  num /= 10;
 }
 cout << (flag == 0 ? "NO" : "YES");
}