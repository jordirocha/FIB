#include <iostream>

using namespace std;

int main()
{
  int aaa = 0, aab = 0, aba = 0, abb = 0, baa = 0, bab = 0, bba = 0, bbb = 0;
  int i = 0;
  bool found = false;
  char c1, c2, c3;
  cin >> c1;
  cin >> c2;
  while(not found and cin >> c3)
    {
      if(c1 == 'a' and c2 == 'a' and c3 == 'a')
        aaa++;
      else if(c1 == 'a' and c2 == 'a' and c3 == 'b')
        aab++;
      else if(c1 == 'a' and c2 == 'b' and c3 == 'a')
        aba++;
      else if(c1 == 'a' and c2 == 'b' and c3 == 'b')
        abb++;
      else if(c1 == 'b' and c2 == 'a' and c3 == 'a')
        baa++;
      else if(c1 == 'b' and c2 == 'a' and c3 == 'b')
        bab++;
      else if(c1 == 'b' and c2 == 'b' and c3 == 'a')
        bba++;
      else if(c1 == 'b' and c2 == 'b' and c3 == 'b')
        bbb++;

      if(aaa > 1 or aab > 1 or aba > 1 or abb > 1 or baa > 1 or bab > 1
         or bba > 1 or bbb > 1)
        {
          cout << c1 << c2 << c3 << " " << i << endl;
          found = true;
        }
      c1 = c2;
      c2 = c3;
      i++;
    }
}
