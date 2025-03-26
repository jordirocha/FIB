#include <iostream>
using namespace std;

string gira(string s)
{
    string temp;
    for (int i = s.length() - 1; i >= 0; i--) temp += s[i];
    return temp;
}

int main()
{
    string str;
    int n, p, k;
    char ch;
    cin >> n >> p >> k >> ch;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        cout << str << endl;
    }
}
