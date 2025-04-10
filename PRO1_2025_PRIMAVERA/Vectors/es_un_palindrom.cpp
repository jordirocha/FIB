#include <iostream>
#include <string>
using namespace std;
bool es_palindrom(const string &s)
{
    int i = 0;
    while (s[i] == s[s.length() - i - 1] and i < s.length()) { i++; }
    return i == s.length();
}
int main()
{
    string s;
    while (cin >> s) cout << es_palindrom(s) << endl;
}
