
#include <iostream>

using namespace std;

int main()
{
  char c1, c2, c3;
  cin >> c1;
  cin >> c2;
  while(cin >> c3)
    {
      cout << "submote: " << c1 << c2 << c3 << endl;
      c1 = c2;
      c2 = c3;
    }
}
