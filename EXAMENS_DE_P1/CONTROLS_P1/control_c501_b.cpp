#include <iostream>
#include <vector>
using namespace std;

typedef vector<string> V;

void selectionSort(V &arr, int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j)
            if (arr[j] < arr[minIndex]) minIndex = j;
        swap(arr[i], arr[minIndex]);
    }
}

void print(const V &v)
{
    if (v.size() != 0)
    {
        cout << v[0];
        for (int i = 1; i < v.size(); i++) cout << ',' << v[i];
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    V words(n);
    for (int i = 0; i < n; i++) cin >> words[i];
    selectionSort(words, n);
    print(words);
}
