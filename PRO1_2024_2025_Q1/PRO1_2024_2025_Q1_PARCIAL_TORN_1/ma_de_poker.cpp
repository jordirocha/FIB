#include <iostream>
using namespace std;

/**
 * @pre c1, c2, c3 en {A, 2, 3, ..., 8, 9, 0, J, Q, K}
 * @post Retorna "Trio d'Asos!", "Trio", "Parella", o
 *       "Totes les cartes diferents" segons c1, c2 i c3.
 */
string poker_hand(char c1, char c2, char c3)
{
  string message;

  int x = (c1 - '0') - (c2 - '0');
  int y = (c2 - '0') - (c3 - '0');
  int z = (c1 - '0') - (c3 - '0');

  if(x == 0 and y == 0)
    if(c1 == 'A')
      message = "Trio d'Asos!";
    else
      message = "Trio";
  else if(x == 0 or y == 0 or z == 0)
    message = "Parella";
  else
    message = "Totes les cartes diferents";
  return message;
}

int main()
{
  char c1, c2, c3;
  while(cin >> c1 >> c2 >> c3) cout << poker_hand(c1, c2, c3) << endl;
}
