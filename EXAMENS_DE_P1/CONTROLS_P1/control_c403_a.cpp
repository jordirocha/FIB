#include <iostream>
using namespace std;

int main()
{
    string str1, str2;
    while (cin >> str1 >> str2)
    {
        int l = 0, r = str1.size();
        bool match = false;
        while (not match and r <= str2.size())
        {
            bool equal = true;
            int t      = 0;
            for (int i = l; i < r and equal; i++)
            {
                if (str1[t] != str2[i]) equal = false;
                t++;
            }
            if (not equal)
            {
                l++;
                r++;
            }
            else { match = equal; }
        }
        if (match) { cout << '+' << endl; }
        else { cout << '-' << endl; }
    }
}
