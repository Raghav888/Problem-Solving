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
    int temp = 1;

    for (int j = 0; j < 2 * i + 1; j++) {

      if (j == 0 || i == num - 1) {
        if (j % 2 == 0) {

          cout << temp;
          temp++;
        } else {
          cout << " ";
        }
      } else if (j == 2 * i) {
        cout << i + 1;
      } else {
        cout << " ";
      }
    }

    cout << endl;
  }
}
