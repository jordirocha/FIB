//
// Created by jordy on 27/11/2024.
//
#include <iostream>
#include <vector>
using namespace std;

typedef vector<string> Word;
typedef vector<char> Letter;
typedef vector<Letter> Matrix;

typedef vector<int> Row;
typedef vector<Row> Coor;

void readData(Matrix &matrix) {
  int rows = matrix.size();
  int columns = matrix[0].size();
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cin >> matrix[i][j];
    }
  }
}

char toLower(char ch) {
  char c = ch;
  c = c - 'A' + 'a'; // c is now 'b'
  return c;
}

char toUpper(char ch) {
  char c = ch;
  c -= 32; // c is now 'B'
  return c;
}

void printMatrix(Matrix &matrix) {
  for (int i = 0; i < matrix.size(); i++) {
    for (int j = 0; j < matrix[0].size(); j++) {
      cout << matrix[i][j];
      if (j != matrix[0].size() - 1) {
        cout << " ";
      }
    }
    cout << endl;
  }
}

void readLetter(Matrix &matrix, vector<vector<int> > coord) {
  for (int i = 0; i < coord.size(); i++) {
    matrix[coord[i][0]][coord[i][1]] = std::toupper(matrix[coord[i][0]][coord[i][1]]);
  }
}

vector<vector<int> > searchWords(Matrix &matrix, int i, int j, const string word) {
  bool findHorizontal = true, findVertical = true, findDiagonal = true;
  vector<vector<int> > coor_h, coor_v, coor_d;
  int diagonalX = i, diagonalY = j;
  int rowIndex = i;
  int size = word.size();

  for (int t = 0; t < size; t++) {
    int columnIndex = j;
    for (int m = 0; m < size; m++) {
      if (rowIndex == i) {
        if (matrix[rowIndex][columnIndex] == word[m]) {
          if (findHorizontal) {
            findHorizontal = true;
            Row temp = {rowIndex, columnIndex};
            coor_h.push_back(temp);
          }
        } else {
          findHorizontal = false;
          if (coor_h.size() > 0) {
            coor_h.pop_back();
          }
        }
      }

      if (columnIndex == j) {
        // cout << matrix[rowIndex][columnIndex] << " " << word[t] << endl;
        if (matrix[rowIndex][columnIndex] == word[t]) {
          if (findVertical) {
            findVertical = true;
            Row temp = {rowIndex, columnIndex};
            coor_v.push_back(temp);
          }
        } else {
          findVertical = false;
          if (coor_v.size() > 0) {
            coor_v.pop_back();
          }
        }
      }

      if (diagonalX == rowIndex && diagonalY == columnIndex) {
        // cout << matrix[rowIndex][columnIndex] << " " << word[diagonalX] << endl;

        if (matrix[rowIndex][columnIndex] == word[diagonalX]) {
          if (findDiagonal) {
            findDiagonal = true;
            Row temp = {rowIndex, columnIndex};
            coor_d.push_back(temp);
          }
        } else {
          findDiagonal = false;
          if (coor_d.size() > 0) {
            coor_d.pop_back();
          }
        }

        diagonalX++;
        diagonalY++;
      }

      columnIndex++;
    }
    // cout << endl;
    rowIndex++;
  }

  if (findHorizontal) {
    // cout << "letra" << word << " horizontal" << endl;
    // readLetter(matrix, coor_h);
    return coor_h;
  }
  if (findVertical) {
    // cout << "letra" << word << " verticalmente" << endl;
    // readLetter(matrix, coor_v);
    return coor_v;
  }
  if (findDiagonal) {
    return coor_d;
  }
  return vector<std::vector<int> >{};
}

int main() {
  // cout << toLower('A') << endl;

  int x, n, m;
  bool first = true;
  vector<vector<int> > matrix;

  while (cin >> x >> n >> m) {
    Word words(x);
    for (int i = 0; i < x; i++) {
      cin >> words[i];
      // cout << words[i] << endl;
    }

    Matrix letterSoup(n, Letter(m));
    readData(letterSoup);

    vector<vector<int> > wordToChange;
    vector<vector<vector<int> > > allWordsToChange;

    for (int i = 0; i < words.size(); i++) {
      int initialRowPosition = 0, initialColumnPosition = 0;
      int size = words[i].size();
      bool loopContinues = true;
      // cout << "buscando la palabra: " << words[i] << endl;
      while (loopContinues) {
        wordToChange = searchWords(letterSoup, initialRowPosition, initialColumnPosition, words[i]);
        if (wordToChange.size() > 0) {
          // readLetter(letterSoup, wordToChange);
          allWordsToChange.push_back(wordToChange);
          // cout << "hay valor a cambiar en la sopa de letras" << endl;
        }
        // cout << endl;
        // cout << (initialColumnPosition + (size - 1)) << endl;
        // cout << (m - 1) << endl;
        if ((initialColumnPosition + (size - 1)) == (m - 1)) {
          initialRowPosition++;
          initialColumnPosition = 0;
        } else {
          initialColumnPosition++;
          // cout << "siguiente columna desde dond empezar " << initialColumnPosition << endl;
        }

        if ((initialRowPosition + (size - 1)) == n) loopContinues = false;
        // int p;
        // cin >> p;
      }
      // cout << "find de busqueda" << endl;
    }

    // cout << "otra palabra" << endl;

    for (int i = 0; i < allWordsToChange.size(); i++) {
      readLetter(letterSoup, allWordsToChange[i]);
    }


    if (first) {
      first = false;
    } else {
      cout << endl;
    }
    printMatrix(letterSoup);
    
  }

  return 0;
}
