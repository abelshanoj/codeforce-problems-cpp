#include <bits/stdc++.h>
using namespace std;
main()
{
 int T;
 cin >> T;
 while (T--)
 {
  int n, q;
  cin >> n >> q;
  int arr[n + 1]{0}, i = 1, a;
  for (int i = 1; i < n + 1; i++)
  {
   cin >> a;
   arr[i] = arr[i - 1] + a;
  }
  while (q--)
  {
   int l, r, k;
   cin >> l >> r >> k;
   int sum = arr[n] - (arr[r] - arr[l - 1]);
   // cout << arr[n] << endl; // 7
   sum += (r - l + 1) * k;
   // cout << arr[n] << endl; // 15
   cout << (sum % 2 == 0 ? "NO\n" : "YES\n");
  }
 }
}