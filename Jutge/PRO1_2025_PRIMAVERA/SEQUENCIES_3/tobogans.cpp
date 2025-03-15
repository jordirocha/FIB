
#include <iostream>

using namespace std;

int main()
{
  int x, y;
  int counter = 2;
  int i = 1;
  int pendienteAsc, pendienteDesc;
  int maxPos = 0, maxPosDes = 0;
  int maxLongAsc = 0, maxLongDesc = 0;
  int pendientePrev = 0;
  bool firstPendiente = true;
  bool end = false;
  cin >> x;
  while(cin >> y)
    {
      i++;
      // cin >> y;
      if(firstPendiente)
        {
          pendientePrev = y - x;
          firstPendiente = false;
        }
      else
        {
          int currentPendiente = y - x;
          if(currentPendiente == pendientePrev) { counter++; }
          else
            {
              if(counter >= 3)
                {
                  if(pendientePrev > 0)
                    {
                      if(counter > maxLongAsc)
                        {
                          maxPos = i - counter;
                          pendienteAsc = pendientePrev;
                          maxLongAsc = counter;
                        }
                    }
                  else
                    {
                      if(counter > maxLongDesc)
                        {
                          maxPosDes = i - counter;
                          pendienteDesc = pendientePrev;
                          maxLongDesc = counter;
                        }
                    }
                  // cout << "minimo hay 3 numeros seguidos con misma pendiente"
                  //      << endl;
                  // cout << "posicion desde donde comienza: " << i - counter
                  //      << endl;
                  // cout << "pendiente: " << pendientePrev << endl;
                  // cout << "longitud elementos: " << counter << endl;
                }
              pendientePrev = currentPendiente;
              counter = 2;
            }
        }

      x = y;
    }
  if(maxLongAsc != 0)
    cout << "/ " << maxPos << ':' << pendienteAsc << ':' << maxLongAsc << endl;
  if(maxLongDesc != 0)
    cout << "/ " << maxPosDes << ':' << pendienteDesc << ':' << maxLongDesc
         << endl;
}
