#include <iostream>

using namespace std;

int central(int n, int l)
{
  int c = l / 2;
  for(int j = 0; j < c; j++) n /= 10;
  return n % 10;
}

int digits(int n)
{
  if(n < 10) return 1;
  return 1 + digits(n / 10);
}

int main()
{
  int n, a, b, c, i = 0;
  bool start = false, validAna = true, validBer = true;
  cin >> n;
  while(validAna and validBer and cin >> a >> b and i < 2 * n)
    {
      if(not start)
        {
          c = central(a, digits(a));
          start = true;
        }
      int dAna = digits(a);
      int dBer = digits(b);
      validAna = (dAna % 2 != 0);
      if(validAna)
        {
          int cAna = central(a, dAna);
          validAna = c == cAna;
        }

      if(validAna)
        {
          validBer = dBer % 2 != 0;
          if(validBer)
            {
              int cBer = central(b, dBer);
              validBer = c == cBer;
            }
        }

      i += 2;
    }
  if(validAna == validBer) { cout << '=' << endl; }
  else if(not validAna) { cout << 'B' << endl; }
  else { cout << 'A' << endl; }
}
