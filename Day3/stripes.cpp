#include <bits/stdc++.h>
using namespace std;
main()
{
 int T;
 cin >> T;
 while (T--)
 {
  string s;
  int flag = 0;
  for (int i = 0; i < 8; i++)
  {
   cin >> s;
   if (s == "RRRRRRRR")
    flag = 1;
  }
  cout << "\n";
  cout << (flag == 1 ? "R\n" : "B\n");
 }
}