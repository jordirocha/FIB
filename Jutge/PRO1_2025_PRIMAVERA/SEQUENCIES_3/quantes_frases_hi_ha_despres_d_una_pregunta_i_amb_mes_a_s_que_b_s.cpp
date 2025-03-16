
#include <iostream>

using namespace std;

void data(bool isQuestion, int &a, int &b, int &counter)
{
  if(isQuestion)
    {
      if(a > b) counter++;
      a = b = 0;
    }
}

int main()
{
  char ch;
  int a = 0, b = 0;
  int counter = 0;
  bool isQuestion = false;
  while(cin >> ch)
    {
      if(isQuestion)
        {
          if(ch == 'a')
            a++;
          else if(ch == 'b')
            b++;
        }
      if(ch == '?')
        {
          data(isQuestion, a, b, counter);
          if(not isQuestion) isQuestion = true;
        }
      else if(ch == '!')
        {
          data(isQuestion, a, b, counter);
          isQuestion = false;
        }
      else if(ch == '.')
        {
          data(isQuestion, a, b, counter);
          isQuestion = false;
        }
    }
  cout << counter << endl;
}
