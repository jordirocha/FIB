//
// Programa que lea un natural n y escriba figuras n×n
// Input: un natural n ≥ 1
// Output: la figura correspondiente
//
#include <iostream>

using namespace std;
void printX(int start, int end)
{
  for(int t = start; t < end; t++) { cout << "X"; }
}

void print(int lines, int adds)
{
  for(int j = 0; j < lines; j++) { cout << " "; }
  printX(0, adds);
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
          printX(0, adds - 2);
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
