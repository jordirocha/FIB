#include <iostream>
#include <vector>
using namespace std;
bool conte(string s1, string s2)
{
    int izq = 0, der = s2.size() - 1;
    bool found = false;
    while (not found and der < s1.size())
    {
        int i = 0;
        while (s2[i] == s1[izq + i] and i < s2.size()) i++;
        if (i == s2.size()) { found = true; }
        else
        {
            izq++;
            der++;
        }
    }
    return found;
}

void read(vector<string> &v, int size)
{
    for (int i = 0; i < size; i++) cin >> v[i];
}

void write(vector<string> &v, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << ":";
        for (int j = 0; j < size; j++)
            if (conte(v[i], v[j])) cout << " " << v[j];
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    read(v, n);
    write(v, n);
}
