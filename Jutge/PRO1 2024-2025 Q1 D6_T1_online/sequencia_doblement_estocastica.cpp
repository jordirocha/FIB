//
// Created by jordi on 27/11/24.
//
#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Data;
// Para este problema, mi solución consiste en leer los valores de entrada como vectores de tamaño n,
// entonces durante la lectura de un fila compruebo si cumple si es estocastico y para las columnas almaceno la suma
// en un vector de tamaño n, comprobando si alfinal si es estocastico
int main() {
    int n;
    while (cin >> n) {
        int size = n;
        // boleanos de comprobación para la fila y columna
        bool is_stochastic_h = true, is_stochastic_v = true;
        // suma_v es el vector donde almacenamos la suma de cada columan de la "matriz"
        Data suma_v(size);

        for (int i = 0; i < size; i++) {
            // la variable suma, almacena la suma total de una fila
            int suma = 0;
            for (int j = 0; j < size; j++) {
                int x;
                cin >> x;
                suma += x;
                // almaceno y acumulo para cada posicion el valor de cada columna
                suma_v[j] += x;
            }
            // compruebo si para la fila leida cumple con la condicion, en el caso de que no ya puedo
            // obtener saber que no lo es porque dejara la variable en falso
            if (is_stochastic_h) is_stochastic_h = (suma == 10);
        }

        // compruebo si las sumas de las columnas cumplen con la condicion, a la minima que una no lo comple termino
        // el bucle
        for (int i = 0; i < size and is_stochastic_v; i++) {
            if (suma_v[i] != 10) is_stochastic_v = false;
        }

        if (is_stochastic_h and is_stochastic_v) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }
    return 0;
}
