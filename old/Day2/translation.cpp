#include <iostream>
#include <algorithm>
using namespace std;
main()
{
 string a, b;
 cin >> a, cin >> b;
 reverse(b.begin(), b.end());
 cout << (a == b ? "YES" : "NO");
}