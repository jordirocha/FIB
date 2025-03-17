
#include <iostream>

using namespace std;

int digitoCentral(int n, int x)
{
  int central = n / 2;
  int i = 0;
  while(central != i)
    {
      x = x / 10;
      i++;
    }
  return x % 10;
}

int digitos(int n)
{
  int digits;
  if(n < 10)
    digits = 1;
  else
    digits = 1 + digitos(n / 10);
  return digits;
}

int main()
{
  int n, a, b;
  bool ana = true, ber = true;
  cin >> n;
  // for(int i = 0; i < 2 * n; i++)
  //   {
  //     cin >> a >> b;
  //     // Ana
  //     int digitosAna = digitos(a);
  //     int centralAna;
  //     if(digitosAna % 2 != 0) { centralAna = digitoCentral(digitosAna, a); }
  //     // Bernat
  //     int digitosBer = digitos(b);
  //     int centralBer;
  //     if(digitosBer % 2 != 0) { centralBer = digitoCentral(digitosBer, b); }
  //
  //     if(centralAna == centralBer)
  //       {
  //         cout << "digito central es el mismo " << centralAna << endl;
  //       }
  //     else
  //       {
  //         cout << "digito central no es el mismo " << centralAna << " "
  //              << centralBer << endl;
  //       }
  //   }

  int i = 0;
  while(ana and ber and (cin >> a >> b) and i < 2 * n)
    {
      //     // Ana
      int digitosAna = digitos(a);
      int centralAna = -1;
      if(digitosAna % 2 != 0)
        {
          centralAna = digitoCentral(digitosAna, a);
          int digitosBer = digitos(b);
          if(digitosBer % 2 != 0)
            {
              int centralBer = digitoCentral(digitosBer, b);
            }
        }
      else { ana = false; }
    }
}
