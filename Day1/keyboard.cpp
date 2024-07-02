#include <bits/stdc++.h>
using namespace std;
main()
{
 string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./", s;
 char x;
 cin >> x;
 cin >> s;
 /*we need to put break statement for the L condition as it replaces the elements in string s with next corresponding element in s1 and the loop j=0 moves in the forward direction due to which the if condition will continue to become true*/
 if (x == 'L')
 {
  for (int i = 0; i < s.size(); i++)
  {
   cout << s1[s1.find(s[i]) + 1];
  }
 }
 else
 {
  for (int i = 0; i < s.size(); i++)
  {
   cout << s1[s1.find(s[i]) - 1];
  }
 }
 cout << endl;
}