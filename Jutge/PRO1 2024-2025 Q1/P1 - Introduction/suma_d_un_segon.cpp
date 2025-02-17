//
// Created by jordy on 17/02/2025.
//
#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    vector<std::string> foo = {
        "distancia_entre_dos_punts.cpp", "rellotge.cpp", "sumar_i_restar_un_segon.cpp", "estudiants.cpp", "racionals_1.cpp", "racionals_4.cpp", "f008b._suma_de_fraccions.cpp", "cercles_1.cpp", "rectangles_1.cpp", "rectangles_2.cpp", "jutge_1.cpp", "f001a._alumnes_de_la_fips.cpp", "f002b._vectors_comprimits.cpp", "point_inside_a_rectangle.cpp", "parvulari.cpp", "paraules_repetides.cpp", "vectors_normalitzats.cpp", "missatge_ocult.cpp"
    };

    for (int i = 0; i < foo.size(); i++) {
        std::ofstream outfile(foo[i]);
        outfile.close();
    }


    // int h, m, s;
    //
    // cin >> h >> m >> s;
    //
    // int seconds = h * 3600 + m * 60 + s + 1;
    //
    // if (seconds == 86400) seconds = 0;
    //
    // s = seconds % 60;
    // m = (seconds / 60) % 60;
    // h = seconds / 3600;
    //
    // if (h < 10) cout << "0";
    // cout << h << ":";
    //
    // if (m < 10) cout << "0";
    // cout << m << ":";
    //
    // if (s < 10) cout << "0";
    // cout << s << endl;
}
