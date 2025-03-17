#include <iostream>
using namespace std;
int main()
{
  char h = '_', o = '_', l = '_', a = '_';
  bool endSequence = false;
  cin >> a;
  while(a != '.' && !endSequence)
    {
      endSequence = (h == 'h' && o == 'o' && l == 'l' && a == 'a');
      h = o;
      o = l;
      l = a;
      cin >> a;
    }
  if(endSequence)
    cout << "hola" << endl;
  else
    cout << "adeu" << endl;
}
