#include <bits/stdc++.h>
using namespace std;
int main()
{
  string a;
  cin >> a;
  set<char> s(a.begin(), a.end());
  if (s.size() % 2 == 0)
    cout << "CHAT WITH HER!";
  else
    cout << "IGNORE HIM!";
}