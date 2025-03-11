#include <iostream>
using namespace std;

char format(int a)
{
  if(a == 10) return 'A';
  if(a == 11) return 'B';
  if(a == 12) return 'C';
  if(a == 13) return 'D';
  if(a == 14) return 'E';
  if(a == 15) return 'F';

  return a + '0';
}

void toHex(int x)
{
  if(x > 0)
    {
      toHex(x / 16);
      cout << format(x % 16);
    }
}

void toOctal(int x)
{
  if(x > 0)
    {
      toOctal(x / 8);
      cout << x % 8;
    }
}

void toBinary(int x)
{
  if(x > 0)
    {
      toBinary(x / 2);
      cout << x % 2;
    }
}

int main()
{
  int a;
  while(cin >> a)
    {
      if(a == 0)
        cout << "0 = 0, 0, 0" << endl;
      else
        {
          cout << a << " = ";
          toBinary(a);
          cout << ", ";
          toOctal(a);
          cout << ", ";
          toHex(a);
          cout << endl;
        }
    }
}
