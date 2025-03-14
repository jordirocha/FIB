#include <iostream>
using namespace std;

int engreixa(int x)
{
  if(x < 10) return x;
  int num = engreixa(x / 10);
  int last = x % 10;
  int prev = num % 10;
  if(prev >= last)
    (num *= 10) += prev;
  else
    (num *= 10) += last;
  return num;
}

int main()
{
  int x;
  while(cin >> x) cout << engreixa(x) << endl;
}