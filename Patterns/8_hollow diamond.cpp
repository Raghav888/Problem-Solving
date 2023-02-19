#include <iostream>

using namespace std;

int main() {

  int num;
  cout << "Enter number of rows" << endl;
  cin >> num;

  for (int i = 0; i < num; i++) {

    for (int j = 0; j < num - i - 1; j++) {
      cout << " ";
    }

    // we find here the num of char is odd so 2*n+1
    for (int k = 0; k < 2 * i + 1; k++) {
      if (k == 0 || k == 2 * i) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }

  for (int i = 0; i < num; i++) {

    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int j = 0; j < 2 * num - 2 * i - 1; j++) {

      if (j == 0 || j == 2 * num - 2 * i - 2) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}
