
#include <iostream>

using namespace std;

void print(int x)
{
  // if() {}
}

int main()
{
  int a, power = 1;
  cin >> a;
  for(int i = 0; i < a; i++) power *= 2;
  print(--power);
}
