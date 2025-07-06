#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<char>> V;

void print(const V &v)
{
    int row = v.size(), col = v[0].size();
    for (int j = 0; j < col + 2; j++) cout << '*';
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        cout << '*';
        for (int j = 0; j < col; j++) cout << v[i][j];
        cout << '*' << endl;
    }
    for (int j = 0; j < col + 2; j++) cout << '*';
    cout << endl;
}

char letter(char &ch)
{
    if (ch - 1 == 'z' and ch > 'z') { ch = 'A'; }
    else if (ch - 1 == 'Z' and ch > 'Z') { ch = 'a'; }
    return ch++;
}

void putLetters(V &v)
{
    char ch  = 'a';
    int cols = v[0].size(), lastRow = v.size() - 1;
    bool lateral = false;
    for (int i = 0; i < cols; ++i) { v[0][i] = letter(ch); }
    if (v.size() - 1 > 1)
    {
        lateral = true;
        for (int i = 1; i < v.size(); ++i) { v[i][cols - 1] = letter(ch); }
    }
    int startCol = lateral ? cols - 2 : cols - 1;
    while (lastRow > 0)
    {
        for (int i = startCol; i >= 0; i--) { v[lastRow][i] = letter(ch); }
        lastRow--;
        if (lastRow > 0)
        {
            for (int i = 0; i < cols - 1; i++) { v[lastRow][i] = letter(ch); }
            lastRow--;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    V grid(n - 2, vector<char>(m - 2));
    putLetters(grid);
    print(grid);
}
