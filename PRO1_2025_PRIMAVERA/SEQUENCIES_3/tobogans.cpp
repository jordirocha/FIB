
#include <iostream>

using namespace std;

int main()
{
  int x, y, count = 2;
  int slope = 0;
  int positionAsc = 0;
  int slopeAsc = 0;
  int lengthAsc = 0;
  int i = 1;
  cin >> x;
  while(cin >> y)
    {
      i++;
      if(slope == 0) slope = y - x;
      // cout << x << " pendiente entre ambos: " << y << endl;
      cout << (y - x) << endl;
      int currentSlope = y - x;

      if(currentSlope != 0)
        {
          if(currentSlope == slope)
            {
              // cout << "misma pendiente sumo 1" << endl;
              count++;
            }
          else
            {
              // cout << "distinta pendiente reinicio con el actual" << endl;
              if(count >= 3)
                {
                  if(count > lengthAsc)
                    {
                      lengthAsc = count;
                      positionAsc = i - count;
                      slopeAsc = slope;
                    }
                  // cout << "total de elementos " << count << endl;
                  // cout << "empezó en la posición " << i - count << endl;
                  // cout << " tenemos un tobogan finaliza en la pos: " << i
                  // << endl;
                }
              slope = currentSlope;
              count = 2;
            }
        }

      // cout << "pendiente de los primeros numeros: " << slope << endl;

      x = y;
    }

  // comprobación del final para cada pendiente
  cout << "ultima posicion " << i << " y conteo " << count << endl;
  if(count >= 3)
    {
      if(count > lengthAsc)
        {
          lengthAsc = count;
          positionAsc = (i)-count;
          slopeAsc = slope;
        }
    }

  cout << "/ " << positionAsc << ':' << slopeAsc << ':' << lengthAsc << endl;

  //  int x, y;
  //  int counter = 2;
  //  int i = 1;
  //  int pendienteAsc, pendienteDesc;
  //  int maxPos = 0, maxPosDes = 0;
  //  int maxLongAsc = 0, maxLongDesc = 0;
  //  int pendientePrev = 0;
  //  bool firstPendiente = true;
  //  bool end = false;
  //  cin >> x;
  //  while(cin >> y)
  //    {
  //      i++;
  //      // cin >> y;
  //      if(firstPendiente)
  //        {
  //          pendientePrev = y - x;
  //          firstPendiente = false;
  //        }
  //      else
  //        {
  //          int currentPendiente = y - x;
  //          if(currentPendiente == pendientePrev) { counter++; }
  //          else
  //            {
  //              if(counter >= 3)
  //                {
  //                  if(pendientePrev > 0)
  //                    {
  //                      if(counter > maxLongAsc)
  //                        {
  //                          maxPos = i - counter;
  //                          pendienteAsc = pendientePrev;
  //                          maxLongAsc = counter;
  //                        }
  //                    }
  //                  else
  //                    {
  //                      if(counter > maxLongDesc)
  //                        {
  //                          maxPosDes = i - counter;
  //                          pendienteDesc = pendientePrev;
  //                          maxLongDesc = counter;
  //                        }
  //                    }
  //                  // cout << "minimo hay 3 numeros seguidos con misma
  //                  pendiente"
  //                  //      << endl;
  //                  // cout << "posicion desde donde comienza: " << i -
  //                  counter
  //                  //      << endl;
  //                  // cout << "pendiente: " << pendientePrev << endl;
  //                  // cout << "longitud elementos: " << counter << endl;
  //                }
  //              pendientePrev = currentPendiente;
  //              counter = 2;
  //            }
  //        }
  //
  //      x = y;
  //    }
  //  if(maxLongAsc != 0)
  //    cout << "/ " << maxPos << ':' << pendienteAsc << ':' << maxLongAsc <<
  //    endl;
  //  if(maxLongDesc != 0)
  //    cout << "/ " << maxPosDes << ':' << pendienteDesc << ':' << maxLongDesc
  //         << endl;
}
