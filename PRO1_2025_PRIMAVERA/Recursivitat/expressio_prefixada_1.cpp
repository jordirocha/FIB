#include <iostream>
using namespace std;
int expressioPrefixada()
{
  int val = -1;
  char ch;
  cin >> ch;
  if(ch >= '0' and ch <= '9')
    val = ch - '0';
  else
    {
      int a = expressioPrefixada();
      int b = expressioPrefixada();
      if(ch == '+')
        val = a + b;
      if(ch == '-')
        val = a - b;
      if(ch == '*')
        val = a * b;
    }
  return val;
}
int main() { cout << expressioPrefixada() << endl; }
