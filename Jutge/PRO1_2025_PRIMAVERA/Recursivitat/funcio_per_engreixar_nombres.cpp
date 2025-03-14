#include <iostream>
using namespace std;

int engreixa(int x)
{
  int first;
  if(x < 10)
    first = x;
  else
    {
      first = engreixa(x / 10);
      int last = x % 10;
      int prev = first % 10;
      if(prev >= last)
        first = first * 10 + prev;
      else
        first = first * 10 + last;
    }
  return first;
}

int main()
{
  int x;
  while(cin >> x) cout << engreixa(x) << endl;
}