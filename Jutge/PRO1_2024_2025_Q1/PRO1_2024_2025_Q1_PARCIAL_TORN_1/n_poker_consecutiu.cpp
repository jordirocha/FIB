#include <iostream>
using namespace std;

int main()
{
  int n, matches = 1;
  char c1, c2;
  cin >> n;
  cin >> c1;
  bool read = (n != 1);
  while(read and cin >> c2)
    {
      if(c1 == c2)
        matches++;
      else
        matches = 1;
      read = matches != n;
      c1 = c2;
    }
  if(read)
    cout << "No hi ha " << n << "-Poker" << endl;
  else
    cout << n << "-Poker de " << c1 << "!" << endl;
}
