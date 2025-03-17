#include <iostream>
#include <vector>
using namespace std;

bool sumaIgualaOtros(vector<int> &v)
{
  if(v.size() == 0 and v[0] == 0)
    return true;
  else if(v.size() == 0)
    return false;

  // int size = v.size();
  // for(int j = 0; j < size; j++)
  //   {
  //     int suma = 0;
  //     for(int k = 0; k < size; k++)
  //       if(j != k)
  //         {
  //           suma += v[k];
  //           // if(suma > v[j]) return false;
  //         }
  //     if(suma == v[j]) return true;
  //   }
  bool match = false;
  for(int i = 0; i < v.size() and not match; i++)
    {
      // cout << "alguna suma igual a " << v[i] << endl;
      int j = 0;
      int suma = 0;
      bool underNumber = false;
      while(j < v.size() and not underNumber)
        {
          if(i != j)
            {
              suma += v[j];
              // cout << "suma actual: " << suma << endl;

              if(v[i] > 0 and suma > v[i])
                {
                  // cout << "suma excede el numero a buscar " << endl;
                  underNumber = true;
                }
            }
          j++;
        }

      if(suma == v[i])
        {
          // cout << "suma igual a los otros del numero escogido" << endl;
          match = true;
        }
    }

  return match;
}

int main()
{
  int n;
  while(cin >> n)
    {
      vector<int> integers(n);
      for(int i = 0; i < n; i++) cin >> integers[i];
      cout << (sumaIgualaOtros(integers) ? "YES" : "NO") << endl;
    }
}
