#include <iostream>
using namespace std;
int main()
{
  int n, line = 1;
  bool endSequence = false;
  while(not endSequence and cin >> n)
    {
      bool descending = true;
      int i = 1;
      string str1, str2;
      if(n != 0) cin >> str1;
      while(i < n)
        {
          cin >> str2;
          if(descending and str1 > str2) descending = false;
          str1 = str2;
          i++;
        }
      if(descending)
        {
          cout << "La primera linia ordenada creixentment es la " << line
               << "." << endl;
          endSequence = true;
        }
      line++;
    }
  if(not endSequence)
    cout << "No hi ha cap linia ordenada creixentment." << endl;
}
