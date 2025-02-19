//
// Created by jordy on 17/02/2025.
//
#include <iostream>
#include <fstream>
#include <vector>

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
//     "insercio_en_taules_ordenada.cpp", "garbell_d_eratosthenes_c.cpp", "diferencia_de_taules.cpp",
//     "interseccio_de_taules.cpp", "fusio_de_taules.cpp", "f013_b_codificacio_de_godel.cpp", "claus_i_parentesis.cpp",
//     "f010_a_llistats_d_almunnes.cpp", "f005_b_nines_russes.cpp", "f013_a_matagalls_montserrat.cpp",
//     "torneig_de_tennis.cpp", "salta_salta.cpp", "rius_digitals.cpp", "anagrames.cpp", "quadrat_magic.cpp",
//     "quants_de_diferents.cpp", "pangrames.cpp", "taulell_magic.cpp", "l_escalabat_d_or.cpp", "molts_en_ratala.cpp",
//     "robots_2.cpp", "othello.cpp", "foc.cpp", "escriptura_de_nombres_amb_letres.cpp", "la_sequencia_perduda.cpp",
//     "mutacions_de_virus.cpp", "dibuixant_parallelepipedes.cpp", "primers_palindromics.cpp", "poquer.cpp"
//
// };
//
// for (int i = 0; i < foo.size(); i++) {
//     std::ofstream outfile(foo[i]);
//
//     const char *longString = R""""(
// #include <iostream>
//
// using namespace std;
//
// int main() {
// int a,b,c;
// cin>>a>>b>>c;
// cout<<a+b+c<<endl;
// }
//
// )"""";
//
//     outfile << longString << std::endl;
//     outfile.close();
// }
