#include <vector>
using namespace std;
int elements_comuns(const vector<int> &X, const vector<int> &Y)
{
    int c = 0, i = 0, j = 0;
    while (i < X.size() && j < Y.size())
    {
        if (X[i] == Y[j])
        {
            c++;
            i++;
            j++;
        }
        else if (X[i] > Y[j]) { j++; }
        else { i++; }
    }
    return c;
}
