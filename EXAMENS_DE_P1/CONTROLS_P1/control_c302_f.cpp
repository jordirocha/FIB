//
// Created by jordy on 22/03/2025.
//
#include <iostream>
using namespace std;

void morse(char c, int &n)
{
    if (c == 'a' or c == 'i') { n = n + 2; }
    else if (c == 'o' or c == 'u') { n = n + 3; }
    else { n++; }
    if (c == 'a') { cout << ".-"; }
    else if (c == 'e') { cout << "."; }
    else if (c == 'i') { cout << ".."; }
    else if (c == 'o') { cout << "---"; }
    else { cout << "..-"; }
}

int main()
{
    char ch = '-';
    int n, m = 0;
    cin >> n;
    while (cin >> ch)
    {
        morse(ch, m);
        if (m >= n)
        {
            cout << endl;
            m = 0;
        }
    }
    if (m != 0) { cout << endl; }
    cout << "STOP" << endl;
}
