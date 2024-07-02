#include <iostream>
#include <sstream>
#include <string>
using namespace std;
main()
{
 string a;
 stringstream ss;
 cin >> a;
 for (int i = 0; i < a.size(); i++)
 {
  if (a.substr(i, 3) == "WUB")
   i += 2, ss << ' ';
  else
   ss << a[i];
 }
 while (ss >> a)
  cout << a << ' ';
}