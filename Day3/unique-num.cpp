#include <bits/stdc++.h>
using namespace std;
main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int n;
    cin >> n;
    vector<int> ans;
    int sum = 0, digit = 9;
    while (sum < n && digit > 0)
    {
      ans.push_back(min(n - sum, digit));
      sum += digit;
      digit--;
    }
    if (sum < n)
      cout << "-1\n";
    else
    {
      reverse(ans.begin(), ans.end());
      for (int i : ans)
        cout << i;
    }
    cout << "\n";
  }
}