//
// Programa que lee una secuencia de palabras
// y determina la segunda palabra maxima
// Input: consiste en una diversas palabras escritas en minusculas,
// como minimo habrÃ¡n dos palabras
// Output: escribe la segunda palabra maxima
//
#include <iostream>
using namespace std;

int main()
{
    string str, max1 = "", max2 = "";
    while(cin >> str)
    {
        if(str > max1)
        {
            max2 = max1;
            max1 = str;
        }
        else if(str > max2 and str < max1)
            max2 = str;
    }
    cout << max2 << endl;
}