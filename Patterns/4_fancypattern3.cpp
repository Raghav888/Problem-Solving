#include <iostream>

using namespace std;

int main() {

  int num;
  cout << "Enter number of rows" << endl;
  cin >> num;
  int j;

  for (int i = 0; i < num; i++) {

    for (j = 0; j < (2 * i + 1) / 2; j++) {
      if (j == 0) {
        cout << "*";
      } else {
        cout << j;
      }
    }

    for (int k = j - 1; k > 0; k--) {
      if (k == 1) {
        cout << "*";
      } else {
        cout << k - 1;
      }
    }
    cout << endl;
  }

  for (int i = 0; i < num - 1; i++) {

    for (j = 0; j < num - 2 - i; j++) {
      if (j == 0) {
        cout << "*";
      } else {
        cout << j;
      }
    }

    for (int k = j - 1; k > 0; k--) {
      if (k == 1) {
        cout << "*";
      } else {
        cout << k - 1;
      }
    }
    cout << endl;
  }
}
