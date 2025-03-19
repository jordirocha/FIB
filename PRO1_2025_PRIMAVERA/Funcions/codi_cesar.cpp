#include <iostream>
using namespace std;

char toUpperCase(char c) { return 'A' + (c - 'a'); }

char codificat(char c, int k)
{
  int s = k % 26;
  char n;
  if((c + s) > 'z')
    {
      s = s - ('z' - c);
      n = 'a' + (s - 1);
    }
  else
    n = c + s;
  return toUpperCase(n);
}

int main()
{
  int k;
  while(cin >> k)
    {
      char b;
      while(cin >> b and b != '.')
        {
          if(b >= 'a' and b <= 'z') { cout << codificat(b, k); }
          else if(b == '_') { cout << ' '; }
          else { cout << b; }
        }
      cout << endl;
    }
}
