#include <bits/stdc++.h>
using namespace std;
/*For a given sequence of 3 numbers to be an AP it has to follow 3 main conditions */
main()
{
 int T;
 cin >> T;
 while (T--)
 {
  int c, a, b;
  cin >> a >> b >> c;
  if ((2 * b - c) > 0 && (2 * b - c) % a == 0)
   cout << "YES\n";
  else if ((2 * b - a) > 0 && (2 * b - a) % c == 0)
   cout << "YES\n";
  else if ((a + c) % (2 * b) == 0)
   cout << "YES\n";
  else
   cout << "NO\n";
 }
}