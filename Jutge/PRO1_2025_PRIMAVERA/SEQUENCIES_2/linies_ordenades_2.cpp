#include <iostream>
using namespace std;
int main()
{
  int n, line = 1, lastLine = 1;
  bool match = false;
  while(cin >> n)
    {
      bool desc = true;
      int i = 1;
      string str1, str2;
      if(n != 0) cin >> str1;
      while(i < n)
        {
          cin >> str2;
          if(desc and str1 > str2) desc = false;
          str1 = str2;
          i++;
        }
      if(desc)
        {
          lastLine = line;
          if(not match) match = true;
        }
      line++;
    }
  if(not match)
    cout << "No hi ha cap linia ordenada creixentment." << endl;
  else
    cout << "L'ultima linia ordenada creixentment es la " << lastLine << "."
         << endl;
}
