#include <iostream>

using namespace std;

int main() {

  int num;
  cout << "Enter number of rows" << endl;
  cin >> num;
  int k = 1;

  for (int i = 0; i < num; i++) {

    for (int j = 0; j < i + 1; j++) {
      cout << k;
      if (j != i) {
        cout << "*";
      }
      k = k + 1;
    }
    cout << endl;
  }

  for (int i = 0; i < num; i++) {
    // flyod num formula is n* (n+1)/2
    int lastNum = (num - i) * ((num - i) + 1) / 2;
    k = lastNum - (num - i - 1);
    for (int j = 0; j < num - i; j++) {
      cout << k;
      if (j != num - i - 1) {
        cout << "*";
      }
      k = k + 1;
    }
    cout << endl;
  }
}
