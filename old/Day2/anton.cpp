#include <iostream>
using namespace std;
main()
{
 int n, d = 0;
 char c;
 for ((cin >> n); n > 0; c % 2 == 0 ? d++ : d--)
 {
  cin >> c;
  n--;
 }
 cout << (d ? (d > 0 ? "Danik" : "Anton") : "Friendship");
}