#include <iostream>

using namespace std;

int main()
{
    double tam;
    string unidad;
    cin >> tam >> unidad;
    cout.setf(ios::fixed);
    cout.precision(2);
    if (unidad == "milles")
        cout << tam *  1.6093 << " quilometres"<< endl;
    else
        cout << tam /  1.6093 << " milles" << endl;
}
