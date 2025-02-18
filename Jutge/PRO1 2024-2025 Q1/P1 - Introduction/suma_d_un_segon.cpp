//
// Created by jordy on 17/02/2025.
//
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int h, m, s;
    cin >> h >> m >> s;

    int seconds = h * 3600 + m * 60 + s + 1;
    seconds %= 86400;

    s = seconds % 60;
    m = (seconds / 60) % 60;
    h = seconds / 3600;

    cout << (h / 10) << (h % 10) << ":";
    cout << (m / 10) << (m % 10) << ":";
    cout << (s / 10) << (s % 10) << endl;
}

// vector<std::string> foo = {
//     "calcul_d_arrels_i_de_quadrats.cpp", "trigonometria.cpp", "distancia_a_l_origen.cpp",
//     "funcio_per_la_suma_del_minim_i_el_maxim_de_tres_enters.cpp", "maxim_de_quatre_enters.cpp",
//     "funcio_per_als_anys_de_traspas.cpp", "dates_valides.cpp", "intercanvi.cpp", "factorial_iteratiu.cpp",
//     "descomposicio_horaria_2.cpp", "capicues.cpp", "comparant_fraccions.cpp", "classificacio_de_caracters_2.cpp",
//     "escriviu_una_creu.cpp", "llegiu_un_nombre_racional_1.cpp", "nombres_perfectes.cpp", "factor_mes_frequent.cpp",
//     "seguent_primer.cpp", "codi_cesar.cpp", "sequencies_similars_2.cpp",
//     "posicions_d_un_maxim_a_dues_sequencies.cpp"
// };
//
// for (int i = 0; i < foo.size(); i++) {
//     std::ofstream outfile(foo[i]);
//     outfile << "my text here!" << std::endl;
//     outfile.close();
// }
