#include <bits/stdc++.h>
using namespace std;
main()
{
 int T;
 cin >> T;
 while (T--)
 {
  int n, k;
  cin >> n >> k;
  int arr[n], j = 1, max_j = INT_MIN;
  for (int i = 0; i < n; i++)
  {
   cin >> arr[i];
  }
  sort(arr, arr + n);
  for (int i = 0; i < n - 1; i++)
  {
   if (arr[i + 1] - arr[i] <= k)
   {
    j++;
    max_j = max(max_j, j);
   }
   else
   {
    j = 1;
   }
  }
  max_j = max(max_j, j);
  cout << n - max_j << endl;
 }
}