//
// Created by jordy on 22/03/2025.
//
#include <iostream>
using namespace std;
void compta(int n1, int n2, int &p1, int &p2)
{
    p1 += n1;
    p2 += n2;
}

int main()
{
    int p1 = 0, p2 = 0;
    string name = "";
    while (cin >> name and name != "FRAU")
    {
        int p, j;
        cin >> p >> j;
        compta(p, j, p1, p2);
    }
    if (name == "FRAU") { cout << "FRAU" << endl; }
    else if (p1 == p2) { cout << "empat" << endl; }
    else if (p1 > p2) { cout << "el guanyador es en Pepito" << endl; }
    else { cout << "el guanyador es en Jaumet" << endl; }
}
