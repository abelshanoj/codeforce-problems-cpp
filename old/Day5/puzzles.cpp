#include <bits/stdc++.h>
using namespace std;
main()
{
 int n, m, arr[51], res = INT_MAX;
 cin >> n >> m;
 for (int i = 0; i < m; i++)
 {
  cin >> arr[i];
 }
 sort(arr, arr + m);
 // for (int i = 0; i < m; i++)
 // {
 //  cout << arr[i] << " ";
 // }

 for (int i = 0; i <= m - n; i++)
 {
  res = min(res, arr[n - 1 + i] - arr[i]);
 }
 cout << res;
}