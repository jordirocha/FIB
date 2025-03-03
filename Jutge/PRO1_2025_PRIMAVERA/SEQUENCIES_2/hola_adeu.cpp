
#include <iostream>

using namespace std;

int main()
{
    char c;
    char d;
    bool firstPart = false;
    bool endSequence = false;
    bool haveH = false;
    bool haveOl = false;
    cin >> c;
    while (not endSequence and c != '.')
    {
        cin >> d;
        if (d == '.')
            endSequence = true;
        else
        {
            if (firstPart and c == 'l' and d == 'a')
            {
                cout << "hola" << endl;
                endSequence = true;
            }
            else if (not haveH and (c != 'h' or c == 'h') and d == 'h')
            {
                haveH = true;
            }
            else if (haveH)
            {
                if (not haveOl and (c == 'o' and d == 'l'))
                {
                    haveOl = true;
                }
                else if (haveOl and c == 'o')
                {
                    cout << "hola" << endl;
                    endSequence = true;
                }
                else
                {
                    haveH = haveOl = false;
                }
            }
            else
            {
                firstPart = (c == 'h' and d == 'o');
                cin >> c;
            }
        }
    }

    if (not firstPart and not haveH)
        cout << "adeu" << endl;
}
