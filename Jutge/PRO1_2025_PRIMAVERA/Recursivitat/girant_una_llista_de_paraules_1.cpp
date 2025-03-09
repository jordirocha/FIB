#include <iostream>
#include <string>
using namespace std;
void read()
{
  string str;
  if(cin >> str)
    {
      read();
      cout << str << endl;
    }
}
int main() { read(); }
