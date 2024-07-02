#include <bits/stdc++.h>
using namespace std;
main()
{
 int n, m, j = 0, a[101];
 cin >> n >> m;
 vector<int> v;
 while (j < n)
 {
  cin >> a[j];
  if (a[j] < 0)
  {
   v.push_back(a[j]);
  }
  j++;
 }

 sort(v.begin(), v.end());

 m = m > v.size() ? v.size() : m;
 j = 0;
 for (int i = 0; i < m; i++)
 {
  j += v[i];
 }
 cout << j * -1;
}