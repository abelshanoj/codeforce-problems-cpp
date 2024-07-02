#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, a, b, c;
 cin >> n;
 int d = n;
 while (d--)
 {
  cin >> a >> b >> c;
  a + b + c < 2 ? n-- : n;
 }
 cout << n;
 return 0;
}