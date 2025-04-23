#include <iostream>
#include <vector>

using namespace std;

vector<int> base(int n, int b)
{
    vector<int> v;
    while (n > 0)
    {
        v.push_back(n % b);
        n /= b;
    }
    return v;
}

void changeVector(vector<int> &op, vector<int> &res)
{
    bool abort = false;
    int i      = 0;
    while (not abort and i < op.size())
    {
        int j     = 0;
        bool cont = true;
        while (cont and j < res.size())
        {
            if (op[i] == res[j])
            {
                res[j] = -1;
                cont   = false;
            }
            else { j++; }
        }
        if (cont) { abort = true; }
        else { i++; }
    }
}

bool mateixos_digits(int x, int y, int b)
{
    vector<int> v1 = base(x, b), v2 = base(y, b), v3 = base(x * y, b);
    bool res = false;
    if (v1.size() + v2.size() == v3.size())
    {
        changeVector(v1, v3);
        changeVector(v2, v3);
        bool allNegative = true;
        int i            = 0;
        while (allNegative and i < v3.size())
        {
            if (v3[i] != -1) { allNegative = false; }
            else { i++; }
        }
        if (allNegative) { res = true; }
        else { res = false; }
    }
    return res;
}

char format(int a)
{
    if (a == 10) return 'A';
    if (a == 11) return 'B';
    if (a == 12) return 'C';
    if (a == 13) return 'D';
    if (a == 14) return 'E';
    if (a == 15) return 'F';

    return a + '0';
}

void escriu(int n, int b)
{
    if (n > 0)
    {
        escriu(n / b, b);
        cout << format(n % b);
    }
}

int main()
{
    int x, y;
    while (cin >> x >> y)
    {
        bool min = false;
        cout << "solucions per a " << x << " i " << y << endl;
        for (int i = 2; i <= 16; i++)
        {
            if (mateixos_digits(x, y, i))
            {
                escriu(x, i);
                cout << " * ";
                escriu(y, i);
                cout << " = ";
                escriu(x * y, i);
                cout << " (" << "base " << i << ')' << endl;
                if (not min) min = true;
            }
        }
        if (not min) { cout << "cap" << endl << endl; }
        else { cout << endl; }
    }
}
