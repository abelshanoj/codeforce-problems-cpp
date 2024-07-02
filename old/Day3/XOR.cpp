#include <bits/stdc++.h>
using namespace std;
main()
{
 int x, y;
 cin >> x >> y;
 for (int i = 1; i <= 20; i++)
 {
  cout << (x ^ i) << "\t" << (y ^ i) << endl;
  cout << ((x ^ i) ^ (y ^ i)) << endl;
 }
}