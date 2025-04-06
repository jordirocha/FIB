#include <iostream>
#include <string>
using namespace std;

void capGirar(int &lines)
{
    string str;
    cin >> str;
    if (str != ".")
    {
        ++lines;
        capGirar(lines);
        if (lines % 2 != 0) cout << str << endl;
        lines--;
    }
}

int main()
{
    int lines = 0;
    capGirar(lines);
}
