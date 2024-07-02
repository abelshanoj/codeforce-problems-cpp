#include <cstdio>
int i, k;
int main()
{
 for (; !k; i++)
 {
  scanf("%d", &k);
 }
 printf("%d", (--i > 9 ? i / 5 - 2 : 2 - i / 5) + (i % 5 > 2 ? i % 5 - 2 : 2 - i % 5));
 return 0;
}