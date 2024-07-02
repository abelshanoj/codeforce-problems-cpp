#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, k, y, count = 0, a[51];
 cin >> n, cin >> k;
 for (int i = 0; i < n; i++)
 {
  cin >> a[i];
  if (i == k - 1)
   y = a[i];
 }
 for (int i = 0; i < n; i++)
 {
  if (a[i] && a[i] >= y)
   count++;
 }
 cout << count;
 return 0;
}