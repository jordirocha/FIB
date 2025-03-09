#include <iostream>
#include <vector>
using namespace std;

bool sumaIgualaOtros(vector<int>& v)
{
    int size = v.size();
    for (int j = 0; j < size; j++)
    {
        int suma = 0;
        for (int k = 0; k < size; k++)
            if (j != k)
                suma += v[k];
        if (suma == v[j])
            return true;
    }
    return false;
}

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> integers(n);
        for (int i = 0; i < n; i++)
            cin >> integers[i];
        cout << (sumaIgualaOtros(integers) ? "YES" : "NO") << endl;
    }
}
