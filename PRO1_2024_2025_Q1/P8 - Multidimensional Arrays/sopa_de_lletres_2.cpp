//
// Created by jordy on 27/11/2024.
//
#include <iostream>
#include <vector>
using namespace std;

typedef vector<string> Word;
typedef vector<string> Char;
typedef vector<Char> Matrix;

void readData(Matrix &matrix) {
  int rows = matrix.size();
  int columns = matrix[0].size();
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cin >> matrix[i][j];
    }
  }
}

void searchWords(const Matrix &matrix, int i, int j, int &outI, int &outJ, const int size) {
  Matrix temp(size, Char(size));
  int columnIndex = -1;
  int columStart = 0;

  for (int k = 0; k < size; k++) {
    columnIndex = j;
    for (int l = 0; l < size; l++) {
      columnIndex++;
      // cout << matrix[k][columnIndex] << ' ';

      if (columnIndex == columStart) {
        cout << matrix[k][columnIndex] << ' ';
      } else if (k == 0) {
        cout << matrix[k][columnIndex] << ' ';
      } else if (k == columnIndex) {
        cout << matrix[k][columnIndex] << ' ';
      } else {
        cout << " ";
      }

      // temp[k][l] = matrix[k][columnIndex];
    }
    cout << endl;
  }
  // outJ = columnIndex;
  cout << "ultima columna leida " << columnIndex << endl;
  // for (int k = 0; k < size; k++) {
  //   for (int l = 0; l < size; l++) {
  //     cout
  //   }
  // }
}

int main() {
  int x, n, m;


  while (cin >> x >> n >> m) {
    Word words(x);
    for (int i = 0; i < x; i++) {
      cin >> words[i];
      cout << words[i] << endl;
    }

    Matrix letterSoup(n, Char(m));
    readData(letterSoup);

    int initialRowPosition = -1, initialColumnPosition = -1;
    int lastestRowPosition = 0, lastestColumnPosition = 0;
    for (int i = 0; i < words.size(); i++) {
      while (true) {
        searchWords(letterSoup, initialRowPosition, initialColumnPosition, lastestRowPosition, lastestColumnPosition,
                    words[i].size());

        cout << "posicion de la columna actual: " << lastestColumnPosition << endl;

        initialColumnPosition++;
        int p;
        cin >> p;
      }
    }


    // for (int i = 0; i < n; i++) {
    //   for (int j = 0; j < m; j++) {
    //     cin >> letterSoup[i][j];
    //     cout << letterSoup[i][j] << " ";
    //   }
    //   cout << endl;
    // }
  }

  return 0;
}
