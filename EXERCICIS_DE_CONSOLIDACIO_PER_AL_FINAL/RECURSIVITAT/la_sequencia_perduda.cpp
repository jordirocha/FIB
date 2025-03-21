#include <iostream>
using namespace std;

int f(int i)
{
  int res;
  if(i == 0)
    return -3;
  else if(i == 1)
    return -1;
  else if(i == 2)
    return 4;
  else if(i == 3)
    return 8;
  else if(i == 4)
    return 15;
  return f(i - 5) + f(i - 3) + f(i - 1);
}

int main()
{
  int n;
  while(cin >> n)
    {
      for(int i = 0; i < n; ++i) cout << f(i) << " ";
      cout << "..." << endl;
    }
}