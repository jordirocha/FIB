#include <iostream>
using namespace std;

int engreixa(int x)
{
  int firstDigit;
  if(x < 10) { firstDigit = x; }
  else
    {
      // cout << "val actual: " << x << endl;
      firstDigit = engreixa(x / 10);
      cout << "val actual: " << x << endl;
      cout << "val de firstDigit " << firstDigit << endl;

      int lastDigit = x % 10;
      int preLastDigit = (x / 10) % 10;

      if(preLastDigit >= lastDigit)
        {
          firstDigit = firstDigit * 10 + preLastDigit;
        }
    }
  return firstDigit;
}

int main()
{
  int x;
  while(cin >> x) cout << engreixa(x) << endl;
}
