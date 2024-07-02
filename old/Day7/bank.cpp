#include <bits/stdc++.h>
using namespace std;
main()
{
 string a;
 cin >> a;
 int n = stoi(a), m = stoi(a);
 n = n / 10;
 char c = a[a.size() - 1];
 a.pop_back(), a.pop_back();
 a += c;
 int sec = stoi(a);

 cout << (max(max(sec, m), n));
}