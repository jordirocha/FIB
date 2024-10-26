#include <iostream>

using namespace std;

int main()
{
    char c;
    int counter = 0;
    cin >> c;

    while (c != '.')
    {
        if (c == 'a')
            counter++;
        cin >> c;
    }
    cout << counter << endl;
}