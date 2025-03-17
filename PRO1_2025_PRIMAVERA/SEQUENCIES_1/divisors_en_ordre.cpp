//
// Programa que escriba en orden todos los divisores de un número dado
// Input: un natural entre 1 y 10^9
// Output: escriba los divisores de n de pequeño a mayor
//
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
  int n;
  while(cin >> n)
    {
      int d;
      int copyd = -1;
      //        if (n > 4)
      //        {
      cout << "divisors de " << n << ": " << 1;
      for(d = 2; d * d <= n; d++)
        {
          if(n % d == 0)
            {
              cout << " " << d;
              copyd = d;
            }
        }
      if(n != 1 and n != 2 and n != 4)
        {
          for(int i = copyd; i > 1; i--)
            {
              if(n % i == 0) cout << " " << n / i;
            }
          cout << " " << n << endl;
        }
      else { cout << " " << n << endl; }

      //        }
      //        else
      //        {
      //            cout << "divisors de " << n << ": ";
      //            if (n == 1)
      //                cout << 1 << endl;
      //            else if (n == 2)
      //                cout << 1 << " " << 2 << endl;
      //            else if (n == 3)
      //                cout << 1 << " " << 3 << endl;
      //            else
      //                cout << 1 << " " << 2 << " " << 4 << endl;
      //        }
    }
}
