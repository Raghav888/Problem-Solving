
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

    for (int k = 0; k < 2 * i + 1; k++) {
      if (k == 0 || k == 2 * i || i == num - 1) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}
