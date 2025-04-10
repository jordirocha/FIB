#include <iostream>
using namespace std;

void changeData(int count, int i, int slope, int &newPos, int &newSlope,
                int &newLong)
{
    newPos   = i - count;
    newSlope = slope;
    newLong  = count;
}

void data(int count, int i, int slope, int &posAsc, int &penAsc, int &longAsc,
          int &posDesc, int &penDesc, int &longDesc)
{
    if (count >= 3)
    {
        if (slope > 0 and count > longAsc)
            changeData(count, i, slope, posAsc, penAsc, longAsc);
        else if (slope < 0 and count > longDesc)
            changeData(count, i, slope, posDesc, penDesc, longDesc);
    }
}

int main()
{
    int x, y, count = 2, i = 2, posAsc = 0, pendAsc = 0, longAsc = 0,
              posDesc = 0, pendDesc = 0, longDesc = 0;
    cin >> x >> y;
    int slope = y - x;
    x         = y;
    while (cin >> y)
    {
        i++;
        int diff = y - x;
        if (diff != 0)
        {
            if (diff == slope) { count++; }
            else
            {
                data(count, i, slope, posAsc, pendAsc, longAsc, posDesc,
                     pendDesc, longDesc);
                count = 2;
            }
            slope = diff;
        }
        x = y;
    }
    i++;
    data(count, i, slope, posAsc, pendAsc, longAsc, posDesc, pendDesc,
         longDesc);
    if (longAsc != 0)
        cout << "/ " << posAsc << ':' << pendAsc << ':' << longAsc << endl;
    if (longDesc != 0)
        cout << "\\ " << posDesc << ':' << pendDesc << ':' << longDesc << endl;
}