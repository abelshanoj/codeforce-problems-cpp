#include <bits/stdc++.h>
using namespace std;
main()
{
 int n, count = 0;
 cin >> n;
 char a[51];
 cin >> a;
 for (char i = 1; i < n; i++)
 {
  if (a[i - 1] == a[i])
   count++;
 }
 cout << count;
}