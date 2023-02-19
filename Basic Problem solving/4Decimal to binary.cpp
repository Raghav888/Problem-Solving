#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int binary[32];
  int num;
  int i = 0;
  cout << "Enter decimal number" << endl;
  cin >> num;
  while (num > 0) {
    binary[i] = num % 2;
    num = num / 2;
    i++;
  }
  cout << "The decimal number for it is: ";
  for (int j = i - 1; j >= 0; j--) {
    cout << binary[j];
  }
}