
#include <iostream>

using namespace std;

char toUpperCase(char c)
{
    char upper = 'A' + (c - 'a');
    return upper;
}

char codificat(char c, int k)
{
    int letras = 25;
    int saltos = k % letras;
    // cout << "saltos: " << saltos << endl;
    // char nextChar = c + (k % letras);
    char n;
    if ((c + saltos) > 'z')
    {

        saltos = saltos - ('z' - c);
        n = ('a') + saltos;
        // cout << "saltos se pasa de una fila de abc.." << endl;
        // cout << "letras: " << c << " pasa a: " << n << endl;
    }
    else
    {
        // cout << "puedo completarlo en un desplazamiendo sin repetir " << endl;
        n = c + saltos;
        // cout << "letras: " << c << " pasa a: " << n << endl;
    }

    return toUpperCase(n);
    // return nextChar;
}

int main()
{
    int k;
    char b;

    while (cin >> k)
    {
        char centinel = '.';
        cin >> b;
        while (b != centinel)
        {
            if (b != '_')
                cout << codificat(b, k);
            else
                cout << ' ';
            cin >> b;
        }
        cout << endl;
    }
}
