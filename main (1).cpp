/**********************
 * Автор: Дедушев П.А.*
 * Вариант: 4         *
 * ********************/
#include <iostream>
using namespace std;

int main() {
  int sum = 0;
  int count = 0;
  int size = 0;
  int colIndex = 0;
  int matrixIndex = 0;
  
  cout << "set the matrix: " << size;
  cin >> size;
  int matrix[size][size];
  cout << "Enter the elements of the matrix " << size << "x" << size << ":" << endl;

  for (matrixIndex = 0; matrixIndex < size; ++matrixIndex) {
      for (colIndex = 0; colIndex < size; ++colIndex) {
          cout << "Element [" << matrixIndex + 1 << "][" << colIndex + 1 << "]: ";
          cin >> matrix[matrixIndex][colIndex];
      }
  }

  cout << "\nMatrix:" << endl;
  for (matrixIndex = 0; matrixIndex < size; ++matrixIndex) {
      for (colIndex = 0; colIndex < size; ++colIndex) {
          cout << matrix[matrixIndex][colIndex] << "\t";
      }
      cout << endl;
  }

  for (matrixIndex = 0; matrixIndex < size; ++matrixIndex) {
      for (colIndex = matrixIndex + 1; colIndex < size; ++colIndex) {
          if (matrix[matrixIndex][colIndex] > 0) {
              sum += matrix[matrixIndex][colIndex];
              ++count;
          }
      }
  }

  cout << "\nResults:" << endl
       << "The number of positive elements above the main diagonal: "  << count << endl
       << "The sum of the positive elements above the main diagonal: " << sum   << endl;

  return 0;
}