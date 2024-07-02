#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, x = 0;
  cin >> n;
  string s;
  for (getline(cin, s); getline(cin, s); x += 44 - s[1])
    ;
  cout << x;
  return 0;
}