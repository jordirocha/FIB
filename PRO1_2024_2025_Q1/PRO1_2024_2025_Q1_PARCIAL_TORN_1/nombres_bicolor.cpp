#include <iostream>
using namespace std;

bool is_bicolor(int n)
{
  if(n < 10) return false;
  int digit = n % 10;
  int counter = 0;
  n /= 10;
  while(n > 0)
    {
      int temp = n % 10;
      n /= 10;
      if(temp != digit)
        {
          counter++;
          digit = temp;
        }
    }
  return (counter == 1);
}
