//
// Programa que lea un natural n y escriba figuras n×n
// Input: un natural n ≥ 1
// Output: la figura correspondiente
//
#include <iostream>

using namespace std;

void print(int lines, int adds)
{
  for(int j = 0; j < lines; j++) { cout << " "; }
  for(int t = 0; t < adds; t++) { cout << "X"; }
}

int main()
{
  int input;

  while(cin >> input)
    {
      int adds = input;
      int lines;
      int linesMiddle = adds - 2;
      for(int i = input; i > 0; i--)
        {
          lines = i - 1;
          print(lines, adds);
          cout << endl;
          adds += 2;
        }

      for(int z = 0; z < linesMiddle; z++)
        {
          for(int y = 0; y < adds - 2; y++) { cout << "X"; }
          cout << endl;
        }
      adds = adds - 2;
      for(int i = 0; i < input; i++)
        {
          lines = i;
          print(lines, adds);
          cout << endl;
          adds -= 2;
        }
      cout << endl;
    }
}
