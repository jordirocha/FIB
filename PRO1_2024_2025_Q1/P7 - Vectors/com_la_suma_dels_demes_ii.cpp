// Created by jordi on 27/11/24.
//
#include <iostream>
#include <string>
using namespace std;


bool es_palindrom(const string &s) {
    bool is_palindrom = true;
    int str_len = s.length();
    for (int i = 0; i < s.length() && is_palindrom; i++) {
        if (s[i] != s[str_len - i - 1]) {
            is_palindrom = false;
        }
    }
    return is_palindrom;
}


int main() {
    string s;
    while (cin >> s) {
        cout << es_palindrom(s) << endl;
        int n = s.size();
    }
    return 0;
}
