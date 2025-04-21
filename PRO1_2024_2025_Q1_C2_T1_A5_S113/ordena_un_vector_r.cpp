#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

void escriu_vector(const vector<int> &v)
{
    for (int i = 0; i < v.size(); i++) { cout << v[i] << " "; }
    cout << endl;
}

/**
 * Llegeix un vector d'enters de forma més ràpida
 */
vector<int> llegeix_vector(int tamany)
{
    string buit, linia;
    getline(cin, buit);
    getline(cin, linia);
    istringstream iss(linia);
    vector<int> v(tamany);
    for (int i = 0; i < tamany; ++i) { iss >> v[i]; }
    return v;
}

/*
 * PRE:  v és un vector R, i pos és la posició de y_1 a v.
 * POST: v està ordenat.
 */
void ordena(vector<int> &v, int pos)
{
    vector<int> sorted(v.size());
    int j = 0;
    for (int i = pos; i < v.size(); i++)
    {
        sorted[j] = v[i];
        j++;
    }
    for (int i = 0; i < pos; i++)
    {
        sorted[j] = v[i];
        j++;
    }
    v = sorted;
}

int main()
{
    int n;
    while (cin >> n)
    { /* n >= 3 */
        vector<int> v = llegeix_vector(n);
        int pos;
        cin >> pos; /* posició de y_1 */
        ordena(v, pos);
        escriu_vector(v);
    }
}
