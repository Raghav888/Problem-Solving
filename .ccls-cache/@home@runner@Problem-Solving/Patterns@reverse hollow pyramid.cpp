#include <iostream>

using namespace std;

int main() {

  int num;
  cout << "Enter number of rows" << endl;
  cin >> num;

  for (int i = 0; i < num; i++) {

    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int j = 0; j < 2 * num - 2 * i - 1; j++) {

      if (j == 0 || j == 2 * num - 2 * i - 2 || i == 0) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}
