#include <bits/stdc++.h>
using namespace std;
main()
{
 char c;
 int p;
 for (; ~scanf("%c", &c);)
 {
  p += (c == 57 | c == 81 || c == 72);
 }
 cout << (p ? "YES" : "NO");
}