#include <iostream>
#include <string>
using namespace std;

void barres(int lines)
{
  if(lines > 0)
    {
      cout << "*" << endl;
      // cout << lines << endl;
      barres(--lines);
    }
  else { cout << "caso base" << endl; }
}

int main()
{
  int n;
  cin >> n;
  int lines = 1;
  for(int i = 0; i < n; i++) lines *= 2;
  --lines;
  // cout << (lines) << endl;
  barres(lines);
}
