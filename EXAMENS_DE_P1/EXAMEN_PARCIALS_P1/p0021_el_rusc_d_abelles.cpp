#include <iostream>
using namespace std;

void pinta_rusc(int f, int c)
{
    for (int j = 0; j < c; j++)
    {
        cout << " _";
        if (j != c - 1) cout << "  ";
    }
    cout << endl;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "/ \\";
            if (j != c - 1) cout << "_";
        }
        cout << endl;
        for (int j = 0; j < c; j++)
        {
            cout << "\\_/";
            if (j != c - 1) cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int f, c;
    bool first = true;
    while (cin >> f >> c)
    {
        if (first) { first = false; }
        else { cout << endl; }
        pinta_rusc(f, c);
    }
}
