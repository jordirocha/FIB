#include <iostream>
#include <string>
using namespace std;
void read()
{
  string str;
  if(cin >> str and str != "fi")
    {
      read();
      cout << str << endl;
    }
}
int main() { read(); }
