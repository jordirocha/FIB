#include <iostream>
#include <vector>
using namespace std;

vector<double> fusio(const vector<double> &V1, const vector<double> &V2)
{
    vector<double> fusio(V1.size() + V2.size());
    int i = 0, j = 0, k = 0;
    while (i < V1.size() and j < V2.size())
    {
        if (V1[i] > V2[j])
        {
            fusio[k] = V2[j];
            j++;
        }
        else if (V1[i] <= V2[j])
        {
            fusio[k] = V1[i];
            i++;
        }
        k++;
    }
    while (i < V1.size())
    {
        fusio[k] = V1[i];
        k++;
        i++;
    }
    while (j < V2.size())
    {
        fusio[k] = V2[j];
        k++;
        j++;
    }
    return fusio;
}

// int main()
// {
//     // cout.setf(ios::fixed, ios::floatfield);
//     // cout.precision(1);
//
//     vector<double> res2 = fusio({2, 3, 5}, {3, 5, 5, 7});
//
//     // int n1;
//     // while (cin >> n1)
//     // {
//     //     vector<double> V1(n1);
//     //     for (int i = 0; i < n1; ++i) cin >> V1[i];
//     //     int n2;
//     //     cin >> n2;
//     //     vector<double> V2(n2);
//     //     for (int i = 0; i < n2; ++i) cin >> V2[i];
//     //
//     //     vector<double> res = fusio(V1, V2);
//     //     int n3             = res.size();
//     //     cout << n3 << endl;
//     //     for (int i = 0; i < n3; ++i) cout << " " << res[i];
//     //     cout << endl << endl;
//     //
//     //     for (int r = 0; r < 200; ++r)
//     //     {
//     //         vector<double> res2 = fusio(V1, V2);
//     //         if (res2 != res) cout << "Resultats diferents amb la mateixa entrada!" << endl;
//     //     }
//     // }
//     return 0;
// }
