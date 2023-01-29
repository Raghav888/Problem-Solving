#include <iostream>
using namespace std;

int main() {
  int rows;
  int cols;
  cout << "Enter number of rows" << endl;
  cin >> rows;
  cout << "Enter number of columns" << endl;
  cin >> cols;

  for (int i = 0; i < rows; i++) {
    if (i == 0 || i == rows - 1) {
      for (int j = 0; j < cols; j++) {
        cout << "*";
      }
    } else {
      cout << "*";
      for (int j = 0; j < cols - 2; j++) {
        cout << " ";
      }
      cout << "*";
    }
    cout << endl;
  }
}