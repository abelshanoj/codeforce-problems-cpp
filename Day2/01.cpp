#include <bits/stdc++.h>
using namespace std;
main()
{
 int T;
 cin >> T;
 while (T--)
 {
  int a = 0, b = 0;
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++)
  {
   if (s[i] == '0')
    a++;
   else if (s[i] == '1')
    b++;
  }
  cout << (min(a, b) % 2 == 0 ? "NET" : "DA") << endl;
 }
}