#include <iostream>
#include <vector>
using namespace std;

struct Persona
{
    string nom;
    bool dona;
    int edat;
};

int age(vector<Persona> &v)
{
    int max = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].dona == 0 and v[i].edat > max) { max = v[i].edat; }
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    vector<Persona> p(n);
    for (int i = 0; i < n; i++)
    {
        string gender;
        cin >> p[i].nom >> gender >> p[i].edat;
        if (gender == "dona") p[i].dona = true;
    }
    cout << age(p) << endl;
}
