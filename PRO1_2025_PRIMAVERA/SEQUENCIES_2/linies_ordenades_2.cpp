#include <iostream>
using namespace std;
int main()
{
    int n, line = 1, lastLine = 0;
    while (cin >> n)
    {
        bool desc = true;
        int i     = 1;
        string str1;
        if (n != 0) cin >> str1;
        while (desc and i < n)
        {
            string str2;
            cin >> str2;
            if (str1 > str2) desc = false;
            str1 = str2;
            i++;
        }
        for (int j = i; j < n; j++)
        {
            string temp;
            cin >> temp;
        }
        if (desc) lastLine = line;
        line++;
    }
    if (lastLine == 0)
        cout << "No hi ha cap linia ordenada creixentment." << endl;
    else
        cout << "L'ultima linia ordenada creixentment es la " << lastLine << "."
             << endl;
}
