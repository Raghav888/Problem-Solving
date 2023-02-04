#include <iostream>

using namespace std;

int main() {

  int num;
  cout << "Enter number of rows" << endl;
  cin >> num;
  int j;

  for (int i = 0; i < num; i++) {

    for (int j = 0; j < i + 1; j++) {
      if (i == num - 1 || j == 0 || j == i) {
        cout << j + 1;
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}
