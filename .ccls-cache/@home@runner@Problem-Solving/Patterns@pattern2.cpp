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
    for (int j = 0; j < i + 1; j++) {
      cout << "*";
    }
    cout << endl;
  }
}