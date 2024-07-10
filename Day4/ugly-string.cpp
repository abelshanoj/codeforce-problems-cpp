#include <bits/stdc++.h>
using namespace std;
main()
{
 int T;
 cin >> T;
 while (T--)
 {
  int n, count = 0;
  cin >> n;
  string s;
  cin >> s;
  for (int i = 0; i < n - 2; i++)
  {
   if (i <= n - 3 && s.substr(i, 4) == "mapie")
    count++;

   else if (s.substr(i, 3) == "map" || s.substr(i, 3) == "pie")
    count++;
  }
  cout << count << endl;
 }
}