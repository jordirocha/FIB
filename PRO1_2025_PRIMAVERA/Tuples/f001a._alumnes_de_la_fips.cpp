#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Assignatura
{
    string nom;  // Nom de l’assignatura
    double nota; // Entre 0 i 10, -1 indica NP
};
struct Alumne
{
    string nom;              // Nom de l’alumne
    int dni;                 // DNI de l’alumne
    vector<Assignatura> ass; // Llista d’assignatures de l’alumne
};
double nota(const vector<Alumne> &alums, int dni, string asign)
{
    for (int i = 0; i < alums.size(); i++)
        if (alums[i].dni == dni)
            for (int j = 0; j < alums[i].ass.size(); j++)
                if (alums[i].ass[j].nom == asign) return alums[i].ass[j].nota;
    return -1;
}
double mitjana(const vector<Assignatura> &ass)
{
    double m = .0;
    int c    = 0;
    for (int i = 0; i < ass.size(); i++)
    {
        if (ass[i].nota != -1)
        {
            m += ass[i].nota;
            c++;
        }
    }
    return c == 0 ? -1 : m / (double)c;
}

void compta(const vector<Alumne> &alums, int dni, string asign, int &com)
{
    double n = nota(alums, dni, asign);
    for (int i = 0; i < alums.size(); i++)
        if (mitjana(alums[i].ass) > n) com++;
}

int main()
{
    int k, dni;
    string asign;
    cin >> k;
    vector<Alumne> alums(k);
    for (int t = 0; t < k; ++t)
    {
        cin >> alums[t].nom >> alums[t].dni;
        int d;
        cin >> d;
        alums[t].ass = vector<Assignatura>(d);
        for (int w = 0; w < d; ++w)
            cin >> alums[t].ass[w].nom >> alums[t].ass[w].nota;
    }
    while (cin >> dni >> asign)
    {
        int com = 0;
        compta(alums, dni, asign, com);
        cout << com << endl;
    }
}