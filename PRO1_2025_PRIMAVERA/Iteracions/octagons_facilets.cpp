//
// Programa que lea un natural n y escriba figuras n×n
// Input: un natural n ≥ 1
// Output: la figura correspondiente
//
#include <iostream>

using namespace std;
void printChar(int n, char ch)
{
  for(int i = 0; i < n; i++) cout << ch;
}

void print(int blankSpace, int x)
{
  printChar(blankSpace, ' ');
  printChar(x, 'X');
  cout << endl;
}

int main()
{
  int input;
  while(cin >> input)
    {
      int x = input;
      for(int i = input; i > 0; i--)
        {
          print(i - 1, x);
          x += 2;
        }
      x = x - 2;
      for(int j = 0; j < input - 2; j++) print(0, x);
      for(int k = 0; k < input; k++)
        {
          print(k, x);
          x -= 2;
        }
      cout << endl;
    }
}
