#include <iostream>
using namespace std;

int engreixa(int x);

int main()
{
  string max1, max2 = "a", str;
  cin >> str;
  max1 = str;
  while(cin >> str)
    {
      if(str > max1)
        {
          if(max2 < str and max1 > max2) max2 = max1;
          max1 = str;
        }
      else if(str < max1)
        {
          if(str > max2) max2 = str;
        }
    }

  cout << max2 << endl;
}
