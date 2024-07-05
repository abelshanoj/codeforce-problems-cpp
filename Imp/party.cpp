#include <bits/stdc++.h>
using namespace std;
main()
{
 int n, arr[2005], maxi = 0;
 cin >> n;
 arr[0] = 0;
 for (int i = 1; i < n + 1; i++)
 {
  cin >> arr[i];
 }
 for (int i = 1; i < n + 1; i++)
 {
  // cout << arr[i] << endl;
  int len = 1, temp = i;
  while (arr[temp] != -1)
   temp = arr[temp], len++;
  maxi = max(maxi, len);
  // cout << maxi << endl;
 }
 cout << maxi << endl;
}