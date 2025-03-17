#include <iostream>
#include <string>
using namespace std;

void capGirar(int &lines, int &limit)
{
  string str;
  if(cin >> str)
    {
      ++lines;
      capGirar(lines, limit);
      if(limit >= lines)
        cout << str << endl;
      else
        lines--;
    }
  else
    limit = lines / 2;
}

int main()
{
  int lines = 0, limit;
  capGirar(lines, limit);
}
