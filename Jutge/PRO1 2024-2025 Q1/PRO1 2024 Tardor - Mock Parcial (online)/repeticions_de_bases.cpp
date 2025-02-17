//
// Created by jordi on 03/11/24.
//
#include <iostream>

using namespace std;

void genome_test(char character, char nucleotide, int index, int &counter_code, int &position_code,
                 int &max_counter_code,
                 int &max_position_code) {
    if (character == nucleotide) {
        counter_code++;
        if (counter_code == 1)
            position_code = index;
    } else {
        if (counter_code > max_counter_code) {
        }
    }
}

void print_genome(char nucleotide, int counter, int position) {
    if (counter > 0)
        cout << "\"" << nucleotide << "\" = " << counter << "(" << position << ")";
    else
        cout << "\"" << nucleotide << "\" = 0";

    if (nucleotide != 'T')
        cout << ", ";
}

int main() {
    char ch;
    int index = 0;

    int counter_a, position_a, max_counter_a, max_position_a;
    counter_a = position_a = max_counter_a = max_position_a = 0;

    int counter_c, position_c, max_counter_c, max_position_c;
    counter_c = position_c = max_counter_c = max_position_c = 0;

    int counter_g, position_g, max_counter_g, max_position_g;
    counter_g = position_g = max_counter_g = max_position_g = 0;

    int counter_t, position_t, max_counter_t, max_position_t;
    counter_t = position_t = max_counter_t = max_position_t = 0;

    while (cin >> ch) {
        int counter_a = 0, position_a = 0, max_counter_a = 0, max_position_a = 0; // A data
        int counter_c = 0, position_c = 0, max_counter_c = 0, max_position_c = 0; // C data
        int counter_g = 0, position_g = 0, max_counter_g = 0, max_position_g = 0; // G data
        int counter_t = 0, position_t = 0, max_counter_t = 0, max_position_t = 0; // T data

        index++;
        genome_test(ch, 'A', index, counter_a, position_a,
                    max_counter_a, max_position_a);
        genome_test(ch, 'C', index, counter_c, position_c,
                    max_counter_c, max_position_c);
        genome_test(ch, 'G', index, counter_g, position_g,
                    max_counter_g, max_position_g);
        genome_test(ch, 'T', index, counter_t, position_t,
                    max_counter_t, max_position_t);

        if (ch == '.') {
            index = 0;

            print_genome('A', max_counter_a, max_position_a);
            print_genome('C', max_counter_c, max_position_c);
            print_genome('G', max_counter_g, max_position_g);
            print_genome('T', max_counter_t, max_position_t);
            cout << endl;

            max_position_a = max_counter_a = counter_a = position_a = 0;
            max_position_t = max_counter_t = counter_t = position_t = 0;
            max_position_g = max_counter_g = counter_g = position_g = 0;
            max_position_c = max_counter_c = counter_c = position_c = 0;
        }
    }
}
