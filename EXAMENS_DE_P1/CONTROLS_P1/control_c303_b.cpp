#include <iostream>
#include <vector>e
using namespace std;

typedef vector<vector<int>> V;

void print(const V &v)
{
    int row = v.size(), col = v[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << v[i][j];
            if (j != col - 1) cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void rotate(V &v, int k)
{
    while (k > 0)
    {
        V rotation(v[0].size(), vector<int>(v.size()));
        int col = 0;
        for (int i = v.size() - 1; i >= 0; i--)
        {
            for (int j = 0; j < v[0].size(); j++) { rotation[j][col] = v[i][j]; }
            col++;
        }
        v = rotation;
        k--;
    }
}

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        V numbers(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) cin >> numbers[i][j];
        int k;
        cin >> k;
        rotate(numbers, k % 4);
        print(numbers);
    }
}
