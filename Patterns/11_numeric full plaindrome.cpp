#include <iostream>

using namespace std;

int main() {

  int num;
  cout << "Enter number of rows" << endl;
  cin >> num;
  int j;

  for (int i = 0; i < num; i++) {
    int output = i;
    for (int j = 0; j < num - i - 1; j++) {
      cout << " ";
    }
    for (j = 0; j < i + 1; j++) {
      output++;
      cout << output;
    }
    for (int k = 0; k < i; k++) {
      output--;
      cout << output;
    }

    cout << endl;
  }
}
