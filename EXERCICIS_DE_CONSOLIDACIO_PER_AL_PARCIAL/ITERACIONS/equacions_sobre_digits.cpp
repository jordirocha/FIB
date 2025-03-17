#include <iostream>
using namespace std;
int main()
{
  char x, op, y, eq, z;
  while(cin >> x >> op >> y >> eq >> z)
    {
      int x1 = (x - '0'), y1 = (y - '0'), z1 = (z - '0');
      if(x == 'x') { cout << z1 - y1 << endl; }
      else if(y == 'x') { cout << z1 - x1 << endl; }
      else { cout << x1 + y1 << endl; }
    }
}
