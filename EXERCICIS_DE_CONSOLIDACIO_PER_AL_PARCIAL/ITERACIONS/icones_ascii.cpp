//
// Created by jordy on 18/03/2025.
//
#include <iostream>
using namespace std;

int binary(int n, int i)
{
  int bin;
  if(n > 0)
    bin = binary(n / 2, i * 10) + n % 2 * i;
  else
    bin = 0;
  return bin;
}

int main()
{
  int h, w;
  while(cin >> h) { cout << binary(h, 1) << endl; }
}
