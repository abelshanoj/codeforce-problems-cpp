#include <bits/stdc++.h>
using namespace std;
main()
{
 int n, arr[101], j = 0, mini = 1;
 for (cin >> n; j < n; j++)
 {
  cin >> arr[j];
 }
 j = 1;
 for (int i = 1; i < n; i++)
 {
  if (arr[i] >= arr[i - 1])
  {
   j++;
  }
  else
   j = 1;
  mini = max(mini, j);
 }
 cout << mini;
}