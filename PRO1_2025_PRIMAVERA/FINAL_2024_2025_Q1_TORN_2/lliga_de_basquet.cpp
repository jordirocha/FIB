#include <iostream>
#include <vector>
using namespace std;

struct Equip {
    string nom;
    int punts_favor;
    int punts_contra;
    int guanyats;
};

bool comp(const Equip &a, const Equip &b) {
    if (a.guanyats == b.guanyats) {
        int puntsA = a.punts_favor - a.punts_contra;
        int puntsB = b.punts_favor - b.punts_contra;
        if (puntsA == puntsB) return a.nom > b.nom;
        return puntsA > puntsB;
    }
    return a.guanyats > b.guanyats;
}

void ordena_per_insercio(vector<Equip> &v) {
    for (int i = 1; i < v.size(); ++i) {
        Equip temp = v[i];
        int j = i;
        while (j > 0 and comp(temp, v[j - 1])) {
            v[j] = v[j - 1];
            --j;
        }
        v[j] = temp;
    }
}

int find(const vector<Equip> &v, const string equip) {
    int i = 0;
    while (v[i].nom != equip and i < v.size()) i++;
    return i;
}

void print(const vector<Equip> &v) {
    int size = v.size();
    for (int i = 0; i < size; i++) {
        cout << v[i].nom << " PUNTS: " << v[i].guanyats <<
                " PF: " << v[i].punts_favor << " PC: " << v[i].punts_contra << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<Equip> equips(n);
    for (int i = 0; i < n; i++) {
        cin >> equips[i].nom;
    }
    string equip1, equip2;
    int cistelles1, cistelles2;
    while (cin >> equip1 >> cistelles1 >> equip2 >> cistelles2) {
        int indEquip1 = find(equips, equip1);
        int indEquip2 = find(equips, equip2);
        // primer equipo
        equips[indEquip1].punts_favor += cistelles1;
        equips[indEquip1].punts_contra += cistelles2;
        // segundo equipo
        equips[indEquip2].punts_favor += cistelles2;
        equips[indEquip2].punts_contra += cistelles1;
        if (cistelles1 > cistelles2) {
            equips[indEquip1].guanyats += 1;
        } else {
            equips[indEquip2].guanyats += 1;
        }
    }
    ordena_per_insercio(equips);
    print(equips);
}
