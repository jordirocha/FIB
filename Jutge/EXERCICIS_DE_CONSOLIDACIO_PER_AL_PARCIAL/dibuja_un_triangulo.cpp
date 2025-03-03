//
// Created by jordi on 06/11/24.
//
#include <iostream>

using namespace std;

int main() {

    int n, pos = 1;
    cin >> n;

    for (int i = 0; i < n; i++) cout << "*";
    cout << endl;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (j == pos) cout << "*";
            else cout << " ";
        }
        pos++;
        cout << "*" << endl;
    }

    // int n;
    // cin >> n;
    // for(int i=0;i<n;++i){
    //     cout << "*";
    // }
    // cout << endl;
    // for(int r=1;r<=((n*n)-n);++r){
    //     bool fi = false;
    //     fi = (r%n)==0;
    //     if(fi){
    //         cout << "*" << endl;
    //     }
    //     else cout << " ";
    // }

}
