#include <iostream>
using namespace std;

void print(int n, string str)
{
    for (int i = 0; i < n; i++) { cout << str; }
}

void escriu_triangle(int t)
{
    int whiteSpaces = t * 2 - 1, tringles = 1;
    for (int i = 0; i < t; i++)
    {
        print(whiteSpaces--, " ");
        for (int j = 0; j < tringles; j++)
        {
            cout << "/\\";
            if (j != tringles - 1) cout << "  ";
        }
        cout << endl;
        print(whiteSpaces--, " ");
        print(tringles, "/__\\");
        cout << endl;
        tringles++;
    }
}

int main()
{
    int t;
    while (cin >> t and t > 0)
    {
        escriu_triangle(t);
        cout << endl;
    }
}
