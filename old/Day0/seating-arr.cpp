#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <utility>
using namespace std;
int main()
{
 int n, min1 = 11, min2 = 11;
 cin >> n;
 vector<int> given(n), original(n);
 for (int i = 0; i < n; i++)
 {
  int x;
  cin >> x;
  given.push_back(x--);
  original.push_back(i);
 }
 set<pair<int, int>> neigh;
 for (int i = 0; i < n; i++)
 {
  neigh.insert(make_pair(given[i], given[(i + 1) % n]));
 }
 bool ok = true;
 do
 {
  for (int i = 0; i < n; i++)
  {
   if (neigh.count(make_pair(original[i], original[(i + 1) % n])))
   {
    ok = false;
    break;
   }
  }
  if (ok == true)
  {
   cout << "OK";
   return 0;
  }
 } while (next_permutation(original.begin(), original.end()));
 if (ok != true)
 {
  cout << -1;
 }
}