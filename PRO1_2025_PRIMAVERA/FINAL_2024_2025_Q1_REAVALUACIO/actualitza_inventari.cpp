#include <iostream>
#include <vector>
using namespace std;

struct Inventari {
    string codi;
    int estoc;
};

int busqueda_binaria(const vector<Inventari> &v, string codi, int izq, int dcha) {
    if (izq > dcha) return -1;
    int m = (dcha + izq) / 2;
    if (v[m].codi < codi) return busqueda_binaria(v, codi, m + 1, dcha);
    else if (codi < v[m].codi) return busqueda_binaria(v, codi, izq, m - 1);
    else return m;
}

void read(vector<Inventari> &v) {
    int size = v.size();
    for (int i = 0; i < size; i++) {
        cin >> v[i].codi >> v[i].estoc;
    }
}

void compras(vector<Inventari> &v, int n, int &errors) {
    for (int i = 0; i < n; i++) {
        Inventari temp;
        cin >> temp.codi >> temp.estoc;
        int index = busqueda_binaria(v, temp.codi, 0, v.size() - 1);
        if (index == -1) {
            errors++;
        } else {
            if (v[index].estoc >= temp.estoc) {
                v[index].estoc -= temp.estoc;
            } else {
                errors++;
            }
        }
    }
}

void print(const vector<Inventari> &v, int errors) {
    int size = v.size();
    for (int i = 0; i < size; i++) cout << v[i].codi << " " << v[i].estoc << endl;
    cout << errors << " errors" << endl;
}

int main() {
    int n;
    cin >> n;
    vector<Inventari> tienda(n);
    read(tienda);
    int m, errors = 0;
    cin >> m;
    compras(tienda, m, errors);
    print(tienda, errors);
}
