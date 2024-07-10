#include <bits/stdc++.h>
using namespace std;
main()
{
 int n;
 cin >> n;
 int arr[n], id = 1;
 for (int i = 0; i < n; cin >> arr[i], i++)
  ;
 cout << abs(arr[1] - arr[0]) << " " << abs(arr[n - 1] - arr[0]) << endl;
 while (id < n - 1)
 {
  int mini = INT_MAX, maxi = INT_MIN;
  mini = min(abs(arr[id - 1] - arr[id]), abs(arr[id + 1] - arr[id]));
  maxi = max(abs(arr[0] - arr[id]), abs(arr[n - 1] - arr[id]));
  cout << mini << " " << maxi << endl;
  id++;
 }
 cout << abs(arr[n - 1] - arr[n - 2]) << " " << abs(arr[0] - arr[n - 1]) << endl;
}