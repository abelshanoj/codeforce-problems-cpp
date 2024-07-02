#include <bits/stdc++.h>
using namespace std;
int main()
{
 long long n;
 bool flag = true;
 int i = 0;
 cin >> n;
 while (n)
 {
  if (n % 10 == 4 || n % 10 == 7)
   i++;
  n /= 10;
 }
 if (i == 0)
 {
  flag = false;
 }
 while (i)
 {
  if (!(i % 10 == 4 || i % 10 == 7))
  {
   flag = false;
  }
  i /= 10;
 }
 flag == false ? cout << "NO" : cout << "YES";
 return 0;
}