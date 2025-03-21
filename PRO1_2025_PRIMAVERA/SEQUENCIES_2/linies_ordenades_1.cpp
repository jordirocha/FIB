#include <iostream>
using namespace std;
int main()
{
    int n, line = 1, lastLine = 0;
    bool endSequence = false;
    while (not endSequence and cin >> n)
    {
        int i = 1;
        string str1;
        bool descending = true;
        if (n != 0) cin >> str1;

        while (descending and i < n)
        {
            string str2;
            cin >> str2;
            if (str1 > str2) descending = false;
            str1 = str2;
            i++;
        }

        for (int j = i; j < n; j++)
        {
            string str2;
            cin >> str2;
        }

        if (descending)
        {
            lastLine    = line;
            endSequence = true;
        }
        line++;
    }

    if (endSequence)
        cout << "La primera linia ordenada creixentment es la " << lastLine
             << "." << endl;
    else
        cout << "No hi ha cap linia ordenada creixentment." << endl;
}
