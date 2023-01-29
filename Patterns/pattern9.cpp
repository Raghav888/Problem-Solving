#include <iostream>
using namespace std;

int main() {
  int rows;
  cout << "Enter number of rows" << endl;
  cin >> rows;

  for (int i = 0; i < rows; i++) {
    for (int s = 0; s < i; s++) {
      cout << " ";
    }

    for (int j = 0; j < rows - i; j++) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
}
