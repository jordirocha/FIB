#include <iostream>
#include <vector>

using namespace std;

vector<bool> pos_rampas(const vector<int> &V)
{
    vector rampas(V.size(), false);
    int izq = 0, cen = 1, der = 2, size = V.size();
    while (der < size)
    {
        if ((V[izq] < V[cen] and V[cen] < V[der]) or (V[izq] > V[cen] and V[cen] > V[der]))
            rampas[izq] = true;
        izq = cen;
        cen = der;
        der++;
    }
    return rampas;
}
int pot_conflictives(const vector<bool> &B)
{
    int p = 0, size = B.size();
    for (int i = 0; i < size; i++)
    {
        if (B[i])
        {
            if (B[i + 1]) p++;
            if (B[i + 2]) p++;
        }
    }
    return p;
}

void read(vector<int> &V)
{
    int n = V.size();
    for (int i = 0; i < n; i++) { cin >> V[i]; }
}

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> V(n);
        read(V);
        cout << "posicions amb rampa:";
        vector<bool> rampas = pos_rampas(V);
        for (int i = 0; i < n; i++)
            if (rampas[i]) cout << ' ' << i;
        cout << endl << "potencialment conflictives: " << pot_conflictives(rampas);
        cout << endl << "---" << endl;
    }
}
