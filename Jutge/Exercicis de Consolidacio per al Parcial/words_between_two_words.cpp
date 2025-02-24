//
// Created by jordi on 06/11/24.
//

#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    string str;
    bool begin = false, end = false, is_bye = false;

    while (!is_bye)
    {
        cin >> str;

        if (str == "principi")
        {
            begin = true;
        }
        else if (str == "final")
        {
            end = true;
        }
        else if (begin and !end)
        {
            counter++;
        }

        if (str == "bye" or str == "adeu")
        {
            is_bye = true;
        }
    }

    if (begin and end)
    {
        cout << counter << endl;
    }
    else
    {
        cout << "sequencia incorrecta" << endl;
    }
}
