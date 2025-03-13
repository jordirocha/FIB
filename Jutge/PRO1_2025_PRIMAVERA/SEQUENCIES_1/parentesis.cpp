#include <iostream>
using namespace std;
int main()
{
  char ch;
  int open = 0;
  bool read = true;

  while(cin >> ch and read)
    {
      if(ch == '(')
        open++;
      else
        {
          if(open > 0)
            open--;
          else
            read = false;
        }
    }

  if(read and open == 0)
    cout << "si" << endl;
  else
    cout << "no" << endl;
}
