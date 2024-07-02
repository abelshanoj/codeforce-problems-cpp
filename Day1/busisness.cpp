#include <bits/stdc++.h>
using namespace std;
/*We need to find the min months only during which the boy has to water the plants such that the plant grows more than k cm*/
main()
{
 int k, arr[12], sum = 0, c = 0;
 cin >> k;
 for (int i = 0; i < 12; i++)
 {
  cin >> arr[i];
  // cout << arr[i] << endl;
 }
 sort(arr, arr + 12, greater<int>());
 for (int i = 0; i < 12; i++)
 {
  // cout << arr[i] << endl;
  if (sum >= k)
   break;
  sum += arr[i];
  c++;
 }
 cout << (sum >= k ? c : -1);
}