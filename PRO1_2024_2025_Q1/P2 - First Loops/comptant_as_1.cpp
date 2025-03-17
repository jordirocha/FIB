#include <iostream>

using namespace std;

int main()
{
    char ch = '0';
    int count = 0;

    while (ch != '.')
    {
        cin >> ch;
        if (ch == 'a')
        {
            count++;
        }
    }
    cout << count << endl;
}