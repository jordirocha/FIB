//
// Created by jordi on 03/11/24.
//
#include <iostream>

using namespace std;
//NAME10 3
//15 7

int main() {

    string str;
    int index = 0;
    int age = 0, subtract_age = 0;
    string name;

    while (cin >> str) {

        if (index == 3) name = str;
        if (index == 7) {
            age = stoi(str); // Trampa?
            subtract_age = age / 10;
            age = age - subtract_age;
        }

        index++;
        if (str == "old.") {
            index = 0;
            cout << name << ", you look younger. I thought you were " << age << " years old." << endl;
        }

    }
}
