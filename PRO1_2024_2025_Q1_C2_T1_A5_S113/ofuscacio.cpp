#include <iostream>
using namespace std;

void ofuscacio(int n, string s)
{
    if (s.length() > 0)
    {
        char c = s[s.length() - 1] + n;
        s.pop_back();
        ofuscacio(n, s);
        cout << c;
    }
}

int main()
{
    int n;
    string str;
    cin >> n >> str;
    ofuscacio(n, str);
}

// int vectorR(const vector<int> &v)
// {
//     bool found = false;
//     int i = 2, x = v[0], y = v[1];
//     while (y > x and i < v.size())
//     {
//         x = y;
//         y = v[i];
//         i++;
//         // if (x > y) { found = true; }
//         // else
//         // {
//         //     x = y;
//         //     i++;
//         // }
//     }
//     return i;
// }