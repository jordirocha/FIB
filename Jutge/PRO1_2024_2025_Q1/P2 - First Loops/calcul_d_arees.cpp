//
// El programa imprime el área de un rectangulo o circulo
// Input: numero n seguido de n descripciones y de cada una palabra "rectangulo" o "circulo", para del primero dos numeros reales y para el otro un numero real
// Output: la area del circulo o rectangulo
//
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(6);
    int lines;
    string figure;
    cin >> lines;

    for (int i = 0; i < lines; i++)
    {
        double x, y;
        cin >> figure;
        if (figure == "rectangle")
        {
            cin >> x >> y;
            cout << (x * y) << endl;
        }
        else
        {
            cin >> x;
            cout << (M_PI * x * x) << endl;
        }
    }
}