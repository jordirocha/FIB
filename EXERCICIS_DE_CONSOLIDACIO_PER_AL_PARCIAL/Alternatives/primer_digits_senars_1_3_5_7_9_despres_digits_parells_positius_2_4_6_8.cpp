#include <iostream>
using namespace std;
int main()
{
  int n;
  while(cin >> n)
    {
      int posImp = 1, posPar = 1, odd = 0, even = 0;
      while(n > 0)
        {
          int d = n % 10;
          if(d != 0)
            {
              if(d % 2 == 0)
                {
                  even = d * posPar + even;
                  posPar *= 10;
                }
              else
                {
                  odd = d * posImp + odd;
                  posImp *= 10;
                }
            }
          n /= 10;
        }
      int y = (odd * posPar + even);
      cout << y << ' ' << y * 2 << endl;
    }
}
