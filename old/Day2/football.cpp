#include <bits/stdc++.h>
using namespace std;
main()
{
 int a0 = 0, a1 = 0;
 char a[101];
 cin >> a;
 cout << ((strstr(a, "0000000") || strstr(a, "1111111")) ? "YES" : "NO");
}