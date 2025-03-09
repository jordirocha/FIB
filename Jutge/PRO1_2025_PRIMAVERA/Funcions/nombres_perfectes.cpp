#include <iostream>
using namespace std;

bool es_perfecte(int x)
{
  int sum;

  if(x >= 2)
    {
      int i = 2;
      sum = 1;
      while(i < x and i * i < x)
        {
          if(x % i == 0)
            sum += i + (x / i);
          i++;
        }
    }
  else
    {
      sum = -1;
    }

  return sum == x;
}

int main()
{
  int x;
  while(cin >> x)
    cout << (es_perfecte(x) ? "true" : "false") << endl;

  return 0;
}
