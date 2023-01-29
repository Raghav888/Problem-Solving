#include <iostream>
using namespace std;

int main() {
  int rows;
  cout << "Enter number of rows" << endl;
  cin >> rows;

  for (int i = 0; i < rows; i++) {
    for (int s = 0; s < rows - i - 1; s++) {
      cout << " ";
    }

    for (int j = 0; j < i + 1; j++) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
}
