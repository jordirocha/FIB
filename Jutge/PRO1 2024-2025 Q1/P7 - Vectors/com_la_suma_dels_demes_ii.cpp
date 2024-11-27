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
        if (n > 100) {
            char c = s[0];
            s[0] = 'a';
            for (int rep = 1000; rep > 0; --rep) cout << es_palindrom(s) << endl;
            s[0] = c;

            c = s[1];
            s[1] = 'a';
            for (int rep = 1000; rep > 0; --rep) cout << es_palindrom(s) << endl;
            s[1] = c;

            c = s[3];
            s[3] = 'a';
            for (int rep = 1000; rep > 0; --rep) cout << es_palindrom(s) << endl;
            s[3] = c;

            c = s[n - 1];
            s[n - 1] = 'a';
            for (int rep = 1000; rep > 0; --rep) cout << es_palindrom(s) << endl;
            s[n - 1] = c;

            c = s[n - 2];
            s[n - 2] = 'a';
            for (int rep = 1000; rep > 0; --rep) cout << es_palindrom(s) << endl;
            s[n - 2] = c;

            c = s[n - 7];
            s[n - 7] = 'a';
            for (int rep = 1000; rep > 0; --rep) cout << es_palindrom(s) << endl;
            s[n - 7] = c;
        }
    }
    return 0;
}
