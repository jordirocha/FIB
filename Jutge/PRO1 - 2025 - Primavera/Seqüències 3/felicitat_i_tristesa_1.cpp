//
// Programa que lee una secuencia de caracteres y cuenta cuantos son felicidad ":-)", "(-:" y de tristeza ":-(" y ")-:"
// Input: consiste en una secuencia de caracteres  {’-’, ’:’, ’(’, ’)’}
// Output: dos numeros indicando nivel de felicidad y de tristeza
//
#include <iostream>

using namespace std;

int main()
{
    char izq, cen, der;
    int feliz = 0, tristeza = 0;
    cin >> izq >> cen;
    while (cin >> der)
    {
        if ((izq == ':' and cen == '-' and der == ')') or (izq == '(' and cen == '-' and der == ':'))
            feliz++;
        else if ((izq == ':' and cen == '-' and der == '(') or (izq == ')' and cen == '-' and der == ':'))
            tristeza++;
        izq = cen;
        cen = der;
    }
    cout << feliz << " " << tristeza << endl;
}
