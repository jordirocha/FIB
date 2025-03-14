#include <iostream>

using namespace std;

int central(int n, int i)
{
  if(n < 10) { return n; }
  int central = i / 2;
  int index = 0;
  while(central != index)
    {
      n = n / 10;
      index++;
    }
  return n % 10;
}

int digits(int n)
{
  int d;
  if(n < 10) { d = 1; }
  else { d = 1 + digits(n / 10); }
  return d;
}

int main()
{
  int n, a, b, c;
  int i = 0;
  bool firstCentral = false;
  bool validAna = true, validBer = true;
  cin >> n;
  while(validAna and validBer and i < n * 2 and cin >> a >> b)
    {
      if(not firstCentral)
        {
          c = central(a, digits(a));
          firstCentral = true;
        }

      int digAna = digits(a);

      if(digAna % 2 == 0) { validAna = false; }
      else
        {
          int cAna = central(a, digAna);
          if(c != cAna) { validAna = false; }
        }

      int digBer = digits(b);
      if(validAna)
        {
          if(digBer % 2 == 0) { validBer = false; }
          else
            {
              int cBer = central(b, digBer);
              if(c != cBer) { validBer = false; }
            }
        }

      i += 2;
    }

  if(validAna == validBer) { cout << '=' << endl; }
  else if(not validAna) { cout << 'B' << endl; }
  else { cout << 'A' << endl; }
}
