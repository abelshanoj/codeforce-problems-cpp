#include <bits/stdc++.h>
int a, b, i;
main()
{
 for (scanf("%d%d", &a, &b); b / a; i++)
  a *= 3, b *= 2;
 printf("%d", i);
}