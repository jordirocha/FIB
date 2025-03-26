#include <iostream>
using namespace std;
int main()
{
    double e, f, g, x, y, z;
    cin >> e >> f >> g >> x >> y >> z;
    double t = ((((e * x) - f) * y) - g) * z;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Torno amb " << t << " euros." << endl;
}
