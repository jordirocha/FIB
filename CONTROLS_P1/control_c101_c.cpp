#include <iostream>

using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if (ch >= '0' and ch <= '9')
        cout << "digit" << endl;
    else if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z'))
        cout << "lletra" << endl;
    else
        cout << "res" << endl;
}
