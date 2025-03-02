#include <iostream>

using namespace std;

int main() {


    int a1, b1, a2, b2;

    cin >> a1 >> b1 >> a2 >> b2;

    if (a1 == a2 and b1 == b2) cout << '=' << " , ";
    else if (a2 <= a1 and b2 >= b1) cout << '1' << " , ";
    else if (a1 <= a2 and b1 >= b2) cout << '2' << " , ";
    else cout << '?' << " , ";

    // start is the max of a1 and a2
    int start;
    if (a1 > a2) start = a1;
    else start = a2;

    // end is the min of b1 and b2
    int end;
    if (b1 < b2) end = b1;
    else end = b2;

    // if the start is minor than the end, print the data
    if (start <= end) cout << '[' << start << ',' << end << ']' << endl;
    else cout <<'[' << ']' << endl;




    // else if (b1 >= a1 and b1 <= a2 and (b2 >= a1 and b2 <= a2)) {
    //     cout << "2 , [" << b1 << "," << b2 << "]" << endl;
    //     // if (b2 >= a1 and b2 <= a2) cout << "2 , [" << b1 << "," << b2 << "]" << endl;
    //     // else if (b2 > a1 and b2 > a2) cout << "? , [" << b1 << "," << a2 << "]" << endl;
    // } else if (b1 >= a1 and b1 <= a2 and (b2 > a1 and b2 > a2)) {
    //     cout << "? , [" << b1 << "," << a2 << "]" << endl;
    // }
    // else if (a1 >= b1 and a1 <= b2 and (a2 >= b1 and a2 <= b2)) {
    //     cout << "1 , [" << a1 << "," << a2 << "]" << endl;
    //     // if (a2 >= b1 and a2 <= b2)cout << "1 , [" << a1 << "," << a2 << "]" << endl;
    //     // else if (a2 > b1 and a2 > b2) cout << "? , [" << a1 << "," << b2 << "]" << endl;
    // } else if (a1 >= b1 and a1 <= b2 and (a2 > b1 and a2 > b2)) {
    //     cout << "? , [" << a1 << "," << b2 << "]" << endl;
    // } else
    //     cout << "? , []" << endl;

    // if (a1 == b1 and a2 == b2) {
    //     cout << "= , ["<< a1 << ","<< a2 << "]" << endl;
    // } else if (b1 >= a1 and b1 <= a2) {
    //     if (b2 >= a1 and b2 <= a2) cout << "2 , [" << b1 << "," << b2 << "]" << endl;
    //     else if (b2 > a1 and b2 > a2) cout << "? , [" << b1 << "," << a2 << "]" << endl; //
    // } else if (a1 >= b1 and a1 <= b2) {
    //     if (a2 >= b1 and a2 <= b2)cout << "1 , [" << a1 << "," << a2 << "]" << endl;
    //     else if (a2 > b1 and a2 > b2) cout << "? , [" << a1 << "," << b2 << "]" << endl; //
    // } else
    //     cout << "? , []" << endl;
}
