#include <iostream>

using namespace std;

int main() {

  int num;
  cout << "Enter number of rows" << endl;
  cin >> num;
  int j;

  for (int i = 0; i < num; i++) {

    for (int j = 0; j < num - i; j++) {

      if (j == 0) {
        cout << i + 1;
      } else if (i == 0) {
        cout << j + 1;
      } else if (j == num - i - 1) {
        cout << num;
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}
