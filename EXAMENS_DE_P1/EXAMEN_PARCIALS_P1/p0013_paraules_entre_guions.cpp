//
// Created by jordy on 22/03/2025.
//
#include <iostream>
using namespace std;

int main()
{
    char ch;
    int counter    = 0;
    bool character = false;
    cin >> ch;
    while (ch != '.')
    {
        if (ch == '-')
        {
            if (counter > 0 and counter < 5)
                cout << counter << endl;
            else if (counter >= 5 and counter <= 9)
                cout << counter << endl;
            else if (counter > 9)
                cout << counter << endl;
            character = false;
            counter   = 0;
        }
        else if (not character and ch != '-')
        {
            character = true;
            counter   = 1;
        }
        else if (character) { counter++; }
        cin >> ch;
    }
}
