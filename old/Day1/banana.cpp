#include <iostream>
using namespace std;
main()
{
 long k, n, w, cost = 0;
 cin >> k, cin >> n, cin >> w;
 cost = ((w * (w + 1)) / 2) * k;
 cout << (cost - n > 0 ? cost - n : 0);
}