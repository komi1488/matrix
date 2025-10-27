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
  
  cout << "set the matrix: " << size;
  cin >> size;
  int matrix[size][size];
  cout << "Enter the elements of the matrix " << size << "x" << size << ":" << endl;

  for (int matrixindex = 0; matrixindex < size; ++matrixindex) {
      for (int colindex = 0; colindex < size; ++colindex) {
          cout << "Element [" << matrixindex + 1 << "][" << colindex + 1 << "]: ";
          cin >> matrix[matrixindex][colindex];
      }
  }

  cout << "\nMatrix:" << endl;
  for (int matrixindex = 0; matrixindex < size; matrixindex++) {
      for (int colindex = 0; colindex < size; colindex++) {
          cout << matrix[matrixindex][colindex] << "\t";
      }
      cout << endl;
  }

  for (int matrixindex = 0; matrixindex < size; ++matrixindex) {
      for (int colindex = matrixindex + 1; colindex < size; ++colindex) {
          if (matrix[matrixindex][colindex] > 0) {
              sum += matrix[matrixindex][colindex];
              ++count;
          }
      }
  }

  cout << "\nResults:" << endl
       << "The number of positive elements above the main diagonal: "  << count << endl
       << "The sum of the positive elements above the main diagonal: " << sum   << endl;

  return 0;
}