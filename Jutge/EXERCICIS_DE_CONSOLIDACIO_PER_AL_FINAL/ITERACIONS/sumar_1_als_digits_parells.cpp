#include <iostream>
using namespace std;
int main()
{
  int n;
  while(cin >> n)
    {
      int num = 0, pos = 1;
      while(n > 0)
        {
          int temp = n % 10;
          if(temp % 2 == 0) temp++;
          num = temp * pos + num;
          pos *= 10;
          n /= 10;
        }
      cout << num << endl;
    }
}
