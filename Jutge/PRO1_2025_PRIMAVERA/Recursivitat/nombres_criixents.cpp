#include <iostream>
using namespace std;

bool es_creixent(int n)
{
  bool isGreater;

  if(n < 10)
    {
      cout << "caso base " << n << endl;
      isGreater = true;
    }
  else
    {
      isGreater = es_creixent(n / 10);

      // and (n % 10) > ((n / 10) / 10)
      // cout << n << endl;
    }
  return isGreater;
}

int main()
{
  int n;
  while(cin >> n)
    cout << (es_creixent(n) ? "true" : "false") << endl;
  return 0;
}
