//
// Created by jordi on 27/11/24.
//
#include <iostream>

using namespace std;

//pre: dos numeros por enteros
//post: retorna el mayor
int max(int a, int b) {
    if (a > b) return a;

    return b;
}

//pre: dos numeros por enteros
//post: retorna el menor
int min(int a, int b) {
    if (a > b) return b;

    return a;
}

//pre: se intrudece una secuencia similar a la notación polaca, pero los operadores son max y min
//post: retorna el valor maximo de la secuencia o el valor minimo
int mmeval() {
    string sequence;
    cin >> sequence;

    // caso base, cuando se introduce un unico operando
    if (sequence != "max" and sequence != "min") {
        int val = stoi(sequence);
        return val;
    }

    // case recursivo, cuando introduce una secuencia de operandos y operadores
    int a = mmeval();
    int b = mmeval();
    //para el operador max
    if (sequence == "max") {
        return max(a, b);
    }
    //para el operador min
    return min(a, b);
}


int main() {
    int num_expressions;
    cin >> num_expressions;
    for (int i = 0; i < num_expressions; i++) {
        cout << mmeval() << endl;
    }
    return 0;
}
