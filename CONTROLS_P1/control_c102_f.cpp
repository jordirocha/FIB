#include <iostream>

using namespace std;

int main()
{
    string name1, name2, name3;
    int edad1, edad2, edad3;
    cin >> name1 >> edad1;
    int edad = edad1;
    cin >> name2 >> edad2;
    if (edad2 < edad) edad = edad2;
    cin >> name3 >> edad3;
    if (edad3 < edad) edad = edad3;
    if (edad == edad1)
        cout << name1 << endl;
    else if (edad == edad2)
        cout << name2 << endl;
    else
        cout << name3 << endl;
}
