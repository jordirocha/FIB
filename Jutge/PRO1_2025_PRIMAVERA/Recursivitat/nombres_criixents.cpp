#include <iostream>
using namespace std;

bool max(int a, int b) { return a >= b; }

bool es_creixent(int n)
{
  bool isGreater;
  if(n < 10)
    isGreater = true;
  else
    isGreater = max(n % 10, (n / 10) % 10) and es_creixent(n / 10);
  return isGreater;
}

int main()
{
  int n;
  while(cin >> n)
    cout << (es_creixent(n) ? "true" : "false") << endl;
  return 0;
}
