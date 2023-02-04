#include <iostream>

using namespace std;

int main() {

  int num;
  cout << "Enter number of rows" << endl;
  cin >> num;
  int j;

  for (int i = 0; i < num; i++) {
    for (int j = 0; j < num + 3 - i; j++) {
      cout << "*";
    }

    for (int k = 0; k < i + 1; k++) {
      cout << i + 1;
      if (k != i) {
        cout << "*";
      }
    }
    for (int j = 0; j < num + 3 - i; j++) {
      cout << "*";
    }

    cout << endl;
  }
}
