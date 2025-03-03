#include <iostream>
#include <string>

using namespace std;

int main()
{
    string srt1, str2;

    cin >> srt1 >> str2;
    int res = srt1.compare(str2);

    if (res == 0)
        cout << srt1 << " = " << str2 << endl;
    else if (res > 0)
        cout << srt1 << " > " << str2 << endl;
    else
        cout << srt1 << " < " << str2 << endl;
}