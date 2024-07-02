#include <bits/stdc++.h>
using namespace std;
main()
{
 int n, j = 1;
 cin >> n;
 vector<int> arr(n);
 while (n--)
 {
  cin >> arr[n];
 }
 for (int i = 1; i < arr.size(); i++)
 {
  j = 1;
  if (arr[i - 1] > arr[i])
  {
   int diff = arr[i - 1] - arr[i];
   arr[i] += diff;
  }
  while (j < i)
  {
   while (arr[j - 1] > arr[j])
   {
    int diff = arr[j - 1] - arr[j];
    arr[j] += diff;
    j = 0;
   }
   j++;
  }
 }
 for (int i : arr)
 {
  cout << i << " ";
 }
}