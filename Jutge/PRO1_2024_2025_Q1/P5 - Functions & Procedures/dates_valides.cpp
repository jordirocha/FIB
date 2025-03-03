/*
Function that returns if a date is valid
*/

#include <iostream>

using namespace std;


bool es_data_valida(int d, int m, int y) {
    bool valid = true;

    // Invalid cases because day or moth not in valid range of any day or month
    if (d <= 0 or m <= 0 or d > 31 or m > 12)
        valid = false;

    // Case of months of 30 day
    else if ((m == 4 or m == 6 or m == 9 or m == 11) and d > 30)
        valid = false;

    // Case of February
    else if (m == 2 and ((d == 29 and not (y%4 == 0 and not (y%100 == 0 and (y/100)%4 != 0))) or d > 29))
        valid = false;

    return valid;
}

int main() {
    int d, m, y;
    cin >> d >> m >> y;

    cout << es_data_valida(d, m, y) << endl;
}
