#include <bits/stdc++.h>
using namespace std;
main()
{
 int n, m;
 cin >> n >> m;
 n = m < n ? m : n;
 cout << (n % 2 == 0 ? "Malvika" : "Akshat");
}