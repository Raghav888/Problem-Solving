#include <iostream>

using namespace std;

int main() {

  int num;
  cout << "Enter number of rows" << endl;
  cin >> num;
  int j;

  for (int i = 0; i < num; i++) {

    for (j = 0; j < i + 1; j++) {

      cout << j + 1;
    }

    for (int k = j - 1; k > 0; k--) {

      cout << k;
    }

    cout << endl;
  }
}
