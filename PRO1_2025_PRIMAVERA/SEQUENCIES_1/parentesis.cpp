#include <iostream>
using namespace std;
int main()
{
  char ch;
  int open = 0;
  bool isCorrect = true;
  while(isCorrect and cin >> ch)
    {
      if(ch == '(')
        open++;
      else
        open--;
      isCorrect = (open >= 0);
    }
  if(open == 0)
    cout << "si" << endl;
  else
    cout << "no" << endl;
}
