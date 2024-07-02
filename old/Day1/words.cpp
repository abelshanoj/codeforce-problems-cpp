#include <bits/stdc++.h>
using namespace std;
main()
{
 char a[101];
 int cap = 0, lower = 0;
 cin >> a;
 for (int i = 0; a[i]; i++)
 {
  a[i] > 96 ? lower++ : cap++;
 }
 for (int i = 0; a[i]; i++)
 {
  cout << (char)(lower >= cap ? a[i] + (a[i] < 96) * 32 : a[i] - (a[i] > 96) * 32);
 }
}