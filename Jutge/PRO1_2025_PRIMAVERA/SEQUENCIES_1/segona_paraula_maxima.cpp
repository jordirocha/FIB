#include <iostream>
using namespace std;

int main()
{
  string max2 = "a", str;
  cin >> str;
  string max1 = str;
  while(cin >> str)
    {
      if(str > max1)
        {
          if(max1 > max2) max2 = max1;
          max1 = str;
        }
      else if(str < max1)
        if(str > max2) max2 = str;
    }
  cout << max2 << endl;
}