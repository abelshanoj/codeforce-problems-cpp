#include <bits/stdc++.h>
using namespace std;
int main()
{
 char a[10001];
 scanf("%s", a);
 *a < 96 ?: *a = *a - 32;
 cout << a;
}