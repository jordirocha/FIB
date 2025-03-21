#include <iostream>

using namespace std;

int main()
{
  string a, b, c;
  cin >> a;
  string max = a;
  cin >> b;
  if(b < max) max = b;
  cin >> c;
  if(c < max) max = c;

  cout << max << endl;
}
