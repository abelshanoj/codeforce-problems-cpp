#include <bits/stdc++.h>
using namespace std;
main()
{
 int T;
 cin >> T;
 while (T--)
 {
  int n, arr[26];
  for (int i = 0; i < 26; i++)
   arr[i] = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
   int a;
   cin >> a;
   for (int j = 0; j < 26; j++)
   {
    if (arr[j] == a)
    {
     cout << (char)(j + 'a');
     arr[j]++;
     break;
    }
   }
  }
  cout << "\n";
 }
}
