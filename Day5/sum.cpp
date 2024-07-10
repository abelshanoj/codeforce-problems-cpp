#include <bits/stdc++.h>
using namespace std;
main()
{
 int T;
 cin >> T;
 while (T--)
 {
  long long n, k, x, s;
  cin >> n >> k >> x;
  long long arr[n]{0};
  for (int i = 1; i < n + 1; i++)
  {
   arr[i] = arr[i - 1] + i;
  }
  if (arr[n] - arr[n - k] >= x && arr[k] <= x)
   cout << "YES\n";
  else
   cout << "NO\n";
 }
}