#include <iostream>
using namespace std;
int main()
{
    char ch;
    int parentesis = 0;
    while (parentesis >= 0 and cin >> ch)
    {
        if (ch == '(') { parentesis++; }
        else { parentesis--; }
    }
    if (parentesis == 0) { cout << "si" << endl; }
    else { cout << "no" << endl; }
}
