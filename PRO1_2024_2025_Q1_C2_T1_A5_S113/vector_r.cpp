#include <iomanip>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/*
 * PRE:  v és un vector R. |v| >= 3
 * POST: torna la posició de y_1 a v.
 */
int vectorR(const vector<int> &v)
{
    int i = 1, pos = 0;
    bool match = false;
    while (not match and i < v.size())
    {
        pos++;
        if (v[i - 1] > v[i]) { match = true; }
        else { i++; }
    }
    return pos;
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

int main()
{
    std::ios_base::sync_with_stdio(false);
    int tamany;
    while (cin >> tamany)
    { /* n >= 3 */
        vector<int> v = llegeix_vector(tamany);
        int pos       = vectorR(v);
        cout << pos << endl;
    }
}
