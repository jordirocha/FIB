#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
using namespace std;
struct Estudiant
{
    int dni;
    string nom;
    double nota; // La nota és un valor entre 0 i 10, o -1 que representa NP
    bool repetidor;
};
void informacio(const vector<Estudiant> &es, double &min, double &max, double &mitj)
{
    bool todosRepetidoresoNP = true;

    for (int i = 0; i < es.size() and todosRepetidoresoNP; i++)
    {
        if (es[i].nota != -1 and not es[i].repetidor)
            todosRepetidoresoNP = false;
    }

    if (todosRepetidoresoNP)
    {
        min = max = mitj = -1;
    }
    else
    {
        max = -1;
        min = 11;
        double sum = .0;
        int counter = 0;
        for (int i = 0; i < es.size(); i++)
        {
            if (es[i].nota != -1 and not es[i].repetidor)
            {
                sum += es[i].nota;
                counter++;
                if (es[i].nota > max)
                    max = es[i].nota;
                if (es[i].nota < min)
                    min = es[i].nota;
            }
        }

        mitj = sum / counter;
    }
}

int main()
{
    cout.setf(ios::fixed);
    cout.precision(4);

    int n = 5;
    // while (cin >> n)
    // {
    vector<Estudiant> es(n);
    Estudiant estudiante1;
    estudiante1.dni = 12345678;
    estudiante1.nom = "Juan Perez";
    estudiante1.nota = 8.5;
    estudiante1.repetidor = false;
    Estudiant estudiante2;
    estudiante2.dni = 98765432;
    estudiante2.nom = "Maria Gonzalez";
    estudiante2.nota = 7.9;
    estudiante2.repetidor = false;
    Estudiant estudiante3 = {54321678, "Pedro Ramirez", -1, true};
    Estudiant estudiante4 = {98765432, "Ana Martinez", -1, true};
    Estudiant estudiante5 = {11223344, "Luisa Fernandez", 10.0, false};
    es[0] = estudiante1;
    es[1] = estudiante2;
    es[2] = estudiante3;
    es[3] = estudiante4;
    es[4] = estudiante5;
    // for (int i = 0; i < n; ++i)
    // {
    //     cin >> es[i].nota >> es[i].repetidor;
    // }
    double min, max, avg;
    informacio(es, min, max, avg);
    cout << min << " " << max << " " << avg << endl;
    // }

    return 0;
}
