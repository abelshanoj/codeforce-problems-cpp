#include <bits/stdc++.h>
using namespace std;
main()
{
  int n;
  string s;
  cin >> n;
  cin >> s;
  int a = 0, b = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '1')
      a++;
    else
      b++;
  }
  // cout << a << " " << b << endl;
  cout << max(a, b) - min(a, b) << endl;
}